FROM ocaml/opam:debian-ocaml-4.14

USER root

RUN apt update && apt-get install -y zsh direnv gdb && apt -y clean

USER opam

RUN opam install -y dune ocamlformat odoc ocp-indent merlin utop base core ocaml-lsp-server ppx_jane js_of_ocaml atdgen earlybird
