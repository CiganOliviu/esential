import os
from create_datasets import dataset_type

class misha_scripts_dependencies():

    def __init__(self):
        super(misha_scripts_dependencies, self).__init__()

    def save_data_for_future_procesing(self, dataset_type = dataset_type()) -> str:

        data = ""

        fileDataStream = open (dataset_type.FILE_NAME, "r")

        for values in fileDataStream:
            if values != '\n':
                data += str(values) + " "

        fileDataStream.close()

        return data

    def remove_file(self, file_name):
        if (os.path.exists(file_name)):
            os.remove(file_name)

    def create_file(self, file_name):

        fileDataStream = open (file_name, "w")
