#!/usr/bin/python3
"""Defines a etxt file-readingg function."""


def read_file(filename="");
"""Prints the contents of a UTF8 text file to stdout."""
with open(filename, encoding="utf-8) as f:
        print(f.read(), end="")
