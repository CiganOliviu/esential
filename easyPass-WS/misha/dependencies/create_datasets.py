import os
import random
import string

class dataset_type():

    def __init__(self):
        super(dataset_type, self).__init__()

    FILE_NAME = ""
    DATASET_SIZE = 0
    MINIM_LIMIT = 0
    MAXIM_LIMIT = 0
    STRING_LENGTH = 0

class dataset_workflow():

    def __init__(self):
        super(dataset_workflow, self).__init__()

    def initialise_parameters_for_numeric_user_datasets_creator (self, file_name, dataset_size, dataset_type = dataset_type()):
        dataset_type.FILE_NAME = file_name
        dataset_type.DATASET_SIZE = dataset_size

    def initialise_parameters_for_numeric_auto_datasets_creator(self, file_name, dataset_size, min_limit, max_limit, dataset_type = dataset_type()):
        dataset_type.FILE_NAME = file_name
        dataset_type.DATASET_SIZE = dataset_size
        dataset_type.MINIM_LIMIT = min_limit
        dataset_type.MAXIM_LIMIT = max_limit

    def initialise_parameters_for_numeric_auto_string_datasets_creator(self, file_name, dataset_size, string_length, dataset_type = dataset_type()):
        dataset_type.FILE_NAME = file_name
        dataset_type.DATASET_SIZE = dataset_size
        dataset_type.STRING_LENGTH = string_length

class create_dataset():

    def __init__(self):
        super(create_dataset, self).__init__()

    def create_linear_dataset(self, dataset_attributes = dataset_type()):

        fileDataStream = open (dataset_attributes.FILE_NAME, "w")
        valueCounter = 0

        for values in range(dataset_attributes.DATASET_SIZE):
            valueCounter += 1
            data = input ("Input value number " + str(valueCounter) + " ")

            fileDataStream.write(str(data) + " ")

        fileDataStream.close()

    def create_matrix_dataset(self, dataset_attributes = dataset_type()):

        fileDataStream = open (dataset_attributes.FILE_NAME, "w")
        valueCounter = 0
        runTimeChecker = 0

        for iterator in range(dataset_attributes.DATASET_SIZE):
            for jiterator in range(dataset_attributes.DATASET_SIZE):
                valueCounter += 1
                data = input ("Input value number " + str(valueCounter) + " ")

                fileDataStream.write(str(data) + " ")

                runTimeChecker += 1

                if runTimeChecker == dataset_attributes.DATASET_SIZE:
                    fileDataStream.write("\n")
                    runTimeChecker = 0

        fileDataStream.close()

    def auto_create_float_list_dataset(self, dataset_attributes = dataset_type()):

        fileDataStream = open (dataset_attributes.FILE_NAME, "w")

        for values in range(dataset_attributes.DATASET_SIZE):
            fileDataStream.write(
                str(random.uniform(dataset_attributes.MINIM_LIMIT, dataset_attributes.MAXIM_LIMIT)) + " ")

        fileDataStream.close()

    def auto_create_integer_list_dataset(self, dataset_attributes=dataset_type()):

        fileDataStream = open(dataset_attributes.FILE_NAME, "w")

        for values in range(dataset_attributes.DATASET_SIZE):
            fileDataStream.write(
                str(random.randint(dataset_attributes.MINIM_LIMIT, dataset_attributes.MAXIM_LIMIT)) + " ")

        fileDataStream.close()

    def auto_create_float_matrix_dataset(self, dataset_attributes = dataset_type()):

        fileDataStream = open (dataset_attributes.FILE_NAME, "w")
        runTimeChecker = 0

        for iterator in range(dataset_attributes.DATASET_SIZE):
            for jiterator in range(dataset_attributes.DATASET_SIZE):
                fileDataStream.write(
                    str(random.uniform(dataset_attributes.MINIM_LIMIT, dataset_attributes.MAXIM_LIMIT)) + " ")

                runTimeChecker += 1

                if runTimeChecker == dataset_attributes.DATASET_SIZE:
                    fileDataStream.write("\n")
                    runTimeChecker = 0

        fileDataStream.close()

    def auto_create_integer_matrix_dataset(self, dataset_attributes=dataset_type()):

        fileDataStream = open(dataset_attributes.FILE_NAME, "w")
        runTimeChecker = 0

        for iterator in range(dataset_attributes.DATASET_SIZE):
            for jiterator in range(dataset_attributes.DATASET_SIZE):
                fileDataStream.write(
                    str(random.randint(dataset_attributes.MINIM_LIMIT, dataset_attributes.MAXIM_LIMIT)) + " ")

                runTimeChecker += 1

                if runTimeChecker == dataset_attributes.DATASET_SIZE:
                    fileDataStream.write("\n")
                    runTimeChecker = 0

        fileDataStream.close()

    def auto_create_string_dataset(self, dataset_attributes=dataset_type()):

        letters = string.ascii_lowercase

        fileDataStream = open(dataset_attributes.FILE_NAME, "w")

        for values in range(dataset_attributes.DATASET_SIZE):
            fileDataStream.write(''.join(random.choice(letters)
                                for i in range(dataset_attributes.STRING_LENGTH)) + " ")

        fileDataStream.close()
