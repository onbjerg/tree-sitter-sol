// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterSolidity",
    products: [
        .library(name: "TreeSitterSolidity", targets: ["TreeSitterSolidity"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterSolidity",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterSolidityTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterSolidity",
            ],
            path: "bindings/swift/TreeSitterSolidityTests"
        )
    ],
    cLanguageStandard: .c11
)