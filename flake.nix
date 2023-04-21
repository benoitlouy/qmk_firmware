{
  inputs = {
    nixpkgs.url = "github:nixos/nixpkgs/nixpkgs-unstable";
    devshell.url = "github:numtide/devshell";
    flake-utils.url = "github:numtide/flake-utils";
  };

  outputs = { self, nixpkgs, devshell, flake-utils }:
    flake-utils.lib.eachDefaultSystem (system:
      let
        pkgs-x86_64 = import nixpkgs {
          system = "x86_64-darwin";
        };
        qmk-overlay = final: prev: {
          qmk = pkgs-x86_64.qmk;
        };
        pkgs = import nixpkgs {
          inherit system;
          overlays = [ devshell.overlays.default qmk-overlay ];
        };
      in
      {
        devShell = pkgs.devshell.mkShell {
          packages = [ pkgs.qmk ];
          name = "qmk-shell";
        };
      }
    );
}
