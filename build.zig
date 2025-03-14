const std = @import("std");

pub fn build(b: *std.Build) !void {
    const target = b.standardTargetOptions(.{});
    const optimize = b.standardOptimizeOption(.{});

    // Create a library containing the predicates C code.
    const predicates_lib = b.addStaticLibrary(.{
        .name = "predicates_zig",
        .root_source_file = null, // No Zig code in this library
        .target = target,
        .optimize = optimize,
    });

    // Add the predicates C source file.
    predicates_lib.addCSourceFile(.{
        .file = .{ .path = "predicates.c" },
        .flags = &[_][]const u8{}, // Add compiler flags here, if needed
    });

    predicates_lib.linkLibC();

    b.installArtifact(predicates_lib); // Install the library
}
