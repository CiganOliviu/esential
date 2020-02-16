import sys
import statistics

sys.path.insert(0, '../dependencies/')

from create_datasets import dataset_type
from misha_scripts_dependencies import misha_scripts_dependencies

def normalize_data(data_set, data_set_workflow) -> list:

	 data = []
	 data = (data_set_workflow.save_data_for_future_procesing(data_set)).split()

	 final_data = []

	 for values in data:
		 if values != '':
			 final_data.append(int(values))

	 return final_data

data_set = dataset_type()
data_set_workflow = misha_scripts_dependencies()

data_set.FILE_NAME = "D:\\code\\workSpace\\esential\\easyPass-WS\\data\\arrayDataSet.data"
data_set.DATASET_SIZE = 10000
data_set.MINIM_LIMIT = -50000
data_set.MAXIM_LIMIT = 50000

data = normalize_data(data_set, data_set_workflow)

class dataset_operations():

	def __init__(self):
		super(dataset_operations, self).__init__()

	def getSum(self, data) -> int:

		sum = 0

		for value in data:
			sum += (value)

		return sum

	def getProduct(self, data) -> int:

		product = 1

		for value in data:
			product *= (value)

		return product

	def getDifference(self, data) -> int:

		difference = (data[0])

		for value in data[1:]:
			difference -= (value)

		return difference

data_operations = dataset_operations()

print(data_operations.getSum(data))
print(data_operations.getProduct(data))
print(data_operations.getDifference(data))
print(data_operations.getSum(data) / 10000)
