import click
import sys

from setup import environment_variables

sys.path.insert(0, 'dependencies/')

from dependencies.templates import templates

class misha_templates_system():

    def __init__(self):
        super(misha_templates_system, self).__init__()

    @click.command()
    @click.option('--file_name', help='Path where the file should be created and the file name')
    def standard_cpp_algo_data_structures_implementation(file_name):
        template = templates()

        template.standard_cpp_algo_data_structures_templates(file_name)
    
    @click.command()
    @click.option('--file_name', help='Path where the file should be created and the file name')
    def standard_c_algo_data_structures_implementation(file_name):
        template = templates()

        template.standard_c_algo_data_structures_templates(file_name)

    @click.command()
    @click.option('--file_name', help='Path where the file should be created and the file name')
    def standard_easyPass_implementation(file_name):
        template = templates()

        template.standard_easyPass_templates(file_name)

    @click.command()
    @click.option('--file_name', help='Path where the file should be created and the file name')
    def standard_esential_implementation(file_name):
        template = templates()

        template.standard_esential_template(file_name)

    @click.command()
    @click.option('--file_name', help='Path where the file should be created and the file name')
    def standard_misha_implementation(file_name):
        template = templates()

        template.standard_misha_template(file_name)
