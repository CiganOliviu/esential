import click
import sys

sys.path.insert(0, 'dependencies/')

from dependencies.create_datasets import create_dataset, dataset_type, dataset_workflow

class misha_datasets_system():
    def __init__(self):
        super(misha_datasets_system, self).__init__()

    @click.command()
    @click.option('--file_name', help='Path where the dataset should be created and the file name')
    @click.option('--dataset_size', default=0, help='The size of the dataset')
    @click.option('--min_limit', default=0, help='The start point of generating values')
    @click.option('--max_limit', default=0, help='The end point of generating values')
    def auto_create_float_list_dataset (file_name, dataset_size, min_limit, max_limit):

        dataset_info = dataset_type()
        dataset_setup = dataset_workflow ()
        dataset_setup.initialise_parameters_for_numeric_auto_datasets_creator  (file_name, dataset_size, min_limit, max_limit, dataset_info)

        dataset_init = create_dataset ()
        dataset_init.auto_create_float_list_dataset (dataset_info)

    @click.command()
    @click.option('--file_name', help='Path where the dataset should be created and the file name')
    @click.option('--dataset_size', default=0, help='The size of the dataset')
    @click.option('--min_limit', default=0, help='The start point of generating values')
    @click.option('--max_limit', default=0, help='The end point of generating values')
    def auto_create_integer_list_dataset (file_name, dataset_size, min_limit, max_limit):

        dataset_info = dataset_type()
        dataset_setup = dataset_workflow ()
        dataset_setup.initialise_parameters_for_numeric_auto_datasets_creator  (file_name, dataset_size, min_limit, max_limit, dataset_info)

        dataset_init = create_dataset ()
        dataset_init.auto_create_integer_list_dataset (dataset_info)

    @click.command()
    @click.option('--file_name', help='Path where the dataset should be created and the file name')
    @click.option('--dataset_size', default=0, help='The size of the dataset')
    @click.option('--min_limit', default=0, help='The start point of generating values')
    @click.option('--max_limit', default=0, help='The end point of generating values')
    def auto_create_float_matrix_dataset (file_name, dataset_size, min_limit, max_limit):

        dataset_info = dataset_type()
        dataset_setup = dataset_workflow ()
        dataset_setup.initialise_parameters_for_numeric_auto_datasets_creator  (file_name, dataset_size, min_limit, max_limit, dataset_info)

        dataset_init = create_dataset ()
        dataset_init.auto_create_float_matrix_dataset (dataset_info)

    @click.command()
    @click.option('--file_name', help='Path where the dataset should be created and the file name')
    @click.option('--dataset_size', default=0, help='The size of the dataset')
    @click.option('--min_limit', default=0, help='The start point of generating values')
    @click.option('--max_limit', default=0, help='The end point of generating values')
    def auto_create_integer_matrix_dataset (file_name, dataset_size, min_limit, max_limit):

        dataset_info = dataset_type()
        dataset_setup = dataset_workflow ()
        dataset_setup.initialise_parameters_for_numeric_auto_datasets_creator  (file_name, dataset_size, min_limit, max_limit, dataset_info)

        dataset_init = create_dataset ()
        dataset_init.auto_create_integer_matrix_dataset (dataset_info)

    @click.command()
    @click.option('--file_name', help='Path where the dataset should be created and the file name')
    @click.option('--dataset_size', default=0, help='The size of the dataset')
    @click.option('--string_length', default=0, help="The size of the words")
    def auto_create_string_dataset (file_name, dataset_size, string_length):

        dataset_info = dataset_type()
        dataset_setup = dataset_workflow ()
        dataset_setup.initialise_parameters_for_numeric_auto_string_datasets_creator  (file_name, dataset_size, string_length, dataset_info)

        dataset_init = create_dataset ()
        dataset_init.auto_create_string_dataset (dataset_info)

    @click.command()
    @click.option('--file_name', help='Path where the dataset should be created and the file name')
    @click.option('--dataset_size', default=0, help='The size of the dataset')
    def create_linear_dataset (file_name, dataset_size):

        dataset_info = dataset_type()
        dataset_setup = dataset_workflow ()
        dataset_setup.initialise_parameters_for_numeric_user_datasets_creator  (file_name, dataset_size, dataset_info)

        dataset_init = create_dataset ()
        dataset_init.create_linear_dataset (dataset_info)

    @click.command()
    @click.option('--file_name', help='Path where the dataset should be created and the file name')
    @click.option('--dataset_size', default=0, help='The size of the dataset')
    def create_matrix_dataset (file_name, dataset_size):

        dataset_info = dataset_type()
        dataset_setup = dataset_workflow ()
        dataset_setup.initialise_parameters_for_numeric_user_datasets_creator  (file_name, dataset_size, dataset_info)

        dataset_init = create_dataset ()
        dataset_init.create_matrix_dataset (dataset_info)
