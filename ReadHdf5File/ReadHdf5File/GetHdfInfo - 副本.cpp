// #include "GetHdfInfo.h"
// #include "hdf5.h"
// #include <iostream>
// bool GETHDFINFO::BisHdf5(string sAllFileName)
// {
// 	if (0 > H5Fis_hdf5(sAllFileName.c_str()))
// 	{
// 		cout << "Hdf5 File is not ext" << endl;
// 		return false;
// 	}
// 	GetHdfData(sAllFileName);
// 	return true;
// }
// 
// void GETHDFINFO::GetHdfData(string sAllFileName)
// {
// // 	hid_t file_id = H5Fopen(sAllFileName.c_str(), H5F_ACC_RDONLY,  H5P_DEFAULT);
// // 	H5O_info_t object_info;
// // 	hid_t dataset_id;
// // 	GetDataset();
// 
// }
// 
// void GETHDFINFO::GetDataset()
// {
// // 	for (hid_t usObjNum = 0; usObjNum < H5Fget_obj_count(file_id, H5F_OBJ_ALL); usObjNum++)
// // 	{
// // 		char sObjName[30] = { 0 };
// // 		herr_t ieoinfo = H5Oget_info_by_idx(file_id, ".", H5_INDEX_UNKNOWN, H5_ITER_UNKNOWN, usObjNum, &object_info, NULL);
// // 		size_t 	sizename = H5Lget_name_by_idx(file_id, ".", H5_INDEX_NAME, H5_ITER_NATIVE, (hsize_t)usObjNum, NULL, NULL, H5P_DEFAULT);
// // 		(void)H5Lget_name_by_idx(file_id, ".", H5_INDEX_NAME, H5_ITER_NATIVE, (hsize_t)usObjNum, sObjName, sizename, H5P_DEFAULT);
// // 
// // 		if (H5O_TYPE_DATASET == object_info.type)
// // 		{
// // 			// 			dataset_id = H5Dopen2(file_id, sObjName , H5P_DEFAULT);
// // 			// 
// // 			// 			hid_t s2_tid = H5Tcreate(H5T_COMPOUND, sizeof(UTESTDATA));
// // 			// 
// // 			// 			H5Tinsert(s2_tid, "c_name", HOFFSET(s2_t, c), H5T_NATIVE_DOUBLE);
// // 			// 			H5Tinsert(s2_tid, "a_name", HOFFSET(s2_t, a), H5T_NATIVE_INT);
// // 			// 
// // 			// 			/*
// // 			// 			* Read two fields c and a from s1 dataset. Fields in the file
// // 			// 			* are found by their names "c_name" and "a_name".
// // 			// 			*/
// // 			// 			status = H5Dread(dataset, s2_tid, H5S_ALL, H5S_ALL, H5P_DEFAULT, s2);
// // 			// 
// // 			// 			H5Dread(dataset_id, H5T_COMPOUND, H5S_ALL, H5S_ALL, H5P_DEFAULT, dset_data);
// // 		}
// // 		else if (H5O_TYPE_GROUP == object_info.type)
// // 		{
// // 
// // 		}
// // 	}
// 
// }
