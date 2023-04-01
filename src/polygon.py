# polygon.py is experimental code to learn how to call
from ctypes import *
import os
import subprocess

lib_comp_gem = cdll.LoadLibrary(f"./src/libcomputational_geometry_lib.dylib")