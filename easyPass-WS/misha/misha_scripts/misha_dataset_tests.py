import sys

sys.path.insert(0, '../dependencies/')

from create_datasets import dataset_type
from misha_scripts_dependencies import misha_scripts_dependencies

def normalize_data(data_set, data_set_workflow) -> list:

	 data = []
	 data = (data_set_workflow.save_data_for_future_procesing(data_set)).split()

	 final_data = []

	 for values in data:
		 if values != '':
			 final_data.append(values)

	 return final_data

data_set = dataset_type()
data_set_workflow = misha_scripts_dependencies()
