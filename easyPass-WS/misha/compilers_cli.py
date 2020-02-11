import click
import sys

from setup import environment_variables

sys.path.insert(0, 'dependencies/')

from dependencies.compilers import compilers, exe_compilers

class misha_compilers_system():

    def __init__(self):
        super(misha_compilers_system, self).__init__()

    @click.command()
    @click.option('--file_name', help='The file that you want to compile')
    def run_gcc(path, file_name):

        compiler_refference = compilers()
        compiler_refference.gcc_compiler(environment_variables.workflow_space_path, file_name)

    @click.command()
    @click.option('--file_name', help='The file that you want to compile')
    def run_jit(path, file_name):

        compiler_refference = compilers()
        compiler_refference.jit_compiler(environment_variables.workflow_space_path, file_name)

    @click.command()
    @click.option('--file_name', help='The file that you want to compile')
    def run_python2(path, file_name):

        compiler_refference = compilers()
        compiler_refference.python2_run(environment_variables.workflow_space_path, file_name)

    @click.command()
    @click.option('--file_name', help='The file that you want to compile')
    def run_python3(path, file_name):

        compiler_refference = compilers()
        compiler_refference.python3_run(environment_variables.workflow_space_path, file_name)

    @click.command()
    @click.option('--file_name', help='The file that you want to compile')
    def go_run(path, file_name):

        compiler_refference = compilers()
        compiler_refference.go_run(environment_variables.workflow_space_path, file_name)


    @click.command()
    @click.option('--file_name', help='The file that you want to compile')
    def go_build(path, file_name):

        compiler_refference = compilers()
        compiler_refference.go_build(environment_variables.workflow_space_path, file_name)

    @click.command()
    def run_exe_python2():
        exe_compiler_refference = exe_compilers()
        exe_compiler_refference.python2_exe()

    @click.command()
    def run_exe_python3():
        exe_compiler_refference = exe_compilers()
        exe_compiler_refference.python3_exe()
