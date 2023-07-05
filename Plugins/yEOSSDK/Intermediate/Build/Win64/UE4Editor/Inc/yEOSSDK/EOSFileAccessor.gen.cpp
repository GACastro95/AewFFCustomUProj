// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSFileAccessor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSFileAccessor() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSFileAccessor_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSFileAccessor();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommon();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUserContentBinary_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEOSFileAccessor::execGetSaveDataPath)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out__strPath);
		P_GET_PROPERTY(FStrProperty,Z_Param__strFileName);
		P_GET_PROPERTY(FStrProperty,Z_Param__strSubDir);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEOSFileAccessor::GetSaveDataPath(Z_Param_Out__strPath,Z_Param__strFileName,Z_Param__strSubDir);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSFileAccessor::execIsExistFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEOSFileAccessor::IsExistFile(Z_Param__strPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSFileAccessor::execLoadTextureFromFile)
	{
		P_GET_OBJECT_REF(UTexture2D,Z_Param_Out__pcLoadedTexture);
		P_GET_PROPERTY(FStrProperty,Z_Param__strFilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEOSFileAccessor::LoadTextureFromFile(Z_Param_Out__pcLoadedTexture,Z_Param__strFilePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSFileAccessor::execLoadTextureFromGameSaved)
	{
		P_GET_OBJECT_REF(UTexture2D,Z_Param_Out__pcLoadedTexture);
		P_GET_PROPERTY(FStrProperty,Z_Param__strFileName);
		P_GET_PROPERTY(FStrProperty,Z_Param__strSubDir);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEOSFileAccessor::LoadTextureFromGameSaved(Z_Param_Out__pcLoadedTexture,Z_Param__strFileName,Z_Param__strSubDir);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSFileAccessor::execReadBinary)
	{
		P_GET_OBJECT_REF(UEOSUserContentBinary,Z_Param_Out__pcBinary);
		P_GET_PROPERTY(FStrProperty,Z_Param__strPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEOSFileAccessor::ReadBinary(Z_Param_Out__pcBinary,Z_Param__strPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSFileAccessor::execReadBinaryFromGameSavedDir)
	{
		P_GET_OBJECT_REF(UEOSUserContentBinary,Z_Param_Out__pcBinary);
		P_GET_PROPERTY(FStrProperty,Z_Param__strFileName);
		P_GET_PROPERTY(FStrProperty,Z_Param__strSubDir);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEOSFileAccessor::ReadBinaryFromGameSavedDir(Z_Param_Out__pcBinary,Z_Param__strFileName,Z_Param__strSubDir);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSFileAccessor::execWriteBinary)
	{
		P_GET_OBJECT(UEOSUserContentBinary,Z_Param__pcBinary);
		P_GET_PROPERTY(FStrProperty,Z_Param__strPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEOSFileAccessor::WriteBinary(Z_Param__pcBinary,Z_Param__strPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSFileAccessor::execWriteBinaryToGameSavedDir)
	{
		P_GET_OBJECT(UEOSUserContentBinary,Z_Param__pcBinary);
		P_GET_PROPERTY(FStrProperty,Z_Param__strFileName);
		P_GET_PROPERTY(FStrProperty,Z_Param__strSubDir);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEOSFileAccessor::WriteBinaryToGameSavedDir(Z_Param__pcBinary,Z_Param__strFileName,Z_Param__strSubDir);
		P_NATIVE_END;
	}
	void UEOSFileAccessor::StaticRegisterNativesUEOSFileAccessor()
	{
		UClass* Class = UEOSFileAccessor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSaveDataPath", &UEOSFileAccessor::execGetSaveDataPath },
			{ "IsExistFile", &UEOSFileAccessor::execIsExistFile },
			{ "LoadTextureFromFile", &UEOSFileAccessor::execLoadTextureFromFile },
			{ "LoadTextureFromGameSaved", &UEOSFileAccessor::execLoadTextureFromGameSaved },
			{ "ReadBinary", &UEOSFileAccessor::execReadBinary },
			{ "ReadBinaryFromGameSavedDir", &UEOSFileAccessor::execReadBinaryFromGameSavedDir },
			{ "WriteBinary", &UEOSFileAccessor::execWriteBinary },
			{ "WriteBinaryToGameSavedDir", &UEOSFileAccessor::execWriteBinaryToGameSavedDir },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSFileAccessor_GetSaveDataPath_Statics
	{
		struct EOSFileAccessor_eventGetSaveDataPath_Parms
		{
			FString _strPath;
			FString _strFileName;
			FString _strSubDir;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strFileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strFileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strSubDir_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strSubDir;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSFileAccessor_GetSaveDataPath_Statics::NewProp__strPath = { "_strPath", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSFileAccessor_eventGetSaveDataPath_Parms, _strPath), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSFileAccessor_GetSaveDataPath_Statics::NewProp__strFileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSFileAccessor_GetSaveDataPath_Statics::NewProp__strFileName = { "_strFileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSFileAccessor_eventGetSaveDataPath_Parms, _strFileName), METADATA_PARAMS(Z_Construct_UFunction_UEOSFileAccessor_GetSaveDataPath_Statics::NewProp__strFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSFileAccessor_GetSaveDataPath_Statics::NewProp__strFileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSFileAccessor_GetSaveDataPath_Statics::NewProp__strSubDir_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSFileAccessor_GetSaveDataPath_Statics::NewProp__strSubDir = { "_strSubDir", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSFileAccessor_eventGetSaveDataPath_Parms, _strSubDir), METADATA_PARAMS(Z_Construct_UFunction_UEOSFileAccessor_GetSaveDataPath_Statics::NewProp__strSubDir_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSFileAccessor_GetSaveDataPath_Statics::NewProp__strSubDir_MetaData)) };
	void Z_Construct_UFunction_UEOSFileAccessor_GetSaveDataPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSFileAccessor_eventGetSaveDataPath_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSFileAccessor_GetSaveDataPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSFileAccessor_eventGetSaveDataPath_Parms), &Z_Construct_UFunction_UEOSFileAccessor_GetSaveDataPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSFileAccessor_GetSaveDataPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSFileAccessor_GetSaveDataPath_Statics::NewProp__strPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSFileAccessor_GetSaveDataPath_Statics::NewProp__strFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSFileAccessor_GetSaveDataPath_Statics::NewProp__strSubDir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSFileAccessor_GetSaveDataPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSFileAccessor_GetSaveDataPath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSFileAccessor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSFileAccessor_GetSaveDataPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSFileAccessor, nullptr, "GetSaveDataPath", nullptr, nullptr, sizeof(EOSFileAccessor_eventGetSaveDataPath_Parms), Z_Construct_UFunction_UEOSFileAccessor_GetSaveDataPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSFileAccessor_GetSaveDataPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSFileAccessor_GetSaveDataPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSFileAccessor_GetSaveDataPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSFileAccessor_GetSaveDataPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSFileAccessor_GetSaveDataPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSFileAccessor_IsExistFile_Statics
	{
		struct EOSFileAccessor_eventIsExistFile_Parms
		{
			FString _strPath;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strPath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSFileAccessor_IsExistFile_Statics::NewProp__strPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSFileAccessor_IsExistFile_Statics::NewProp__strPath = { "_strPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSFileAccessor_eventIsExistFile_Parms, _strPath), METADATA_PARAMS(Z_Construct_UFunction_UEOSFileAccessor_IsExistFile_Statics::NewProp__strPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSFileAccessor_IsExistFile_Statics::NewProp__strPath_MetaData)) };
	void Z_Construct_UFunction_UEOSFileAccessor_IsExistFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSFileAccessor_eventIsExistFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSFileAccessor_IsExistFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSFileAccessor_eventIsExistFile_Parms), &Z_Construct_UFunction_UEOSFileAccessor_IsExistFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSFileAccessor_IsExistFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSFileAccessor_IsExistFile_Statics::NewProp__strPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSFileAccessor_IsExistFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSFileAccessor_IsExistFile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSFileAccessor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSFileAccessor_IsExistFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSFileAccessor, nullptr, "IsExistFile", nullptr, nullptr, sizeof(EOSFileAccessor_eventIsExistFile_Parms), Z_Construct_UFunction_UEOSFileAccessor_IsExistFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSFileAccessor_IsExistFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSFileAccessor_IsExistFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSFileAccessor_IsExistFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSFileAccessor_IsExistFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSFileAccessor_IsExistFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSFileAccessor_LoadTextureFromFile_Statics
	{
		struct EOSFileAccessor_eventLoadTextureFromFile_Parms
		{
			UTexture2D* _pcLoadedTexture;
			FString _strFilePath;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcLoadedTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strFilePath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSFileAccessor_LoadTextureFromFile_Statics::NewProp__pcLoadedTexture = { "_pcLoadedTexture", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSFileAccessor_eventLoadTextureFromFile_Parms, _pcLoadedTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSFileAccessor_LoadTextureFromFile_Statics::NewProp__strFilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSFileAccessor_LoadTextureFromFile_Statics::NewProp__strFilePath = { "_strFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSFileAccessor_eventLoadTextureFromFile_Parms, _strFilePath), METADATA_PARAMS(Z_Construct_UFunction_UEOSFileAccessor_LoadTextureFromFile_Statics::NewProp__strFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSFileAccessor_LoadTextureFromFile_Statics::NewProp__strFilePath_MetaData)) };
	void Z_Construct_UFunction_UEOSFileAccessor_LoadTextureFromFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSFileAccessor_eventLoadTextureFromFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSFileAccessor_LoadTextureFromFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSFileAccessor_eventLoadTextureFromFile_Parms), &Z_Construct_UFunction_UEOSFileAccessor_LoadTextureFromFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSFileAccessor_LoadTextureFromFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSFileAccessor_LoadTextureFromFile_Statics::NewProp__pcLoadedTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSFileAccessor_LoadTextureFromFile_Statics::NewProp__strFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSFileAccessor_LoadTextureFromFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSFileAccessor_LoadTextureFromFile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSFileAccessor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSFileAccessor_LoadTextureFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSFileAccessor, nullptr, "LoadTextureFromFile", nullptr, nullptr, sizeof(EOSFileAccessor_eventLoadTextureFromFile_Parms), Z_Construct_UFunction_UEOSFileAccessor_LoadTextureFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSFileAccessor_LoadTextureFromFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSFileAccessor_LoadTextureFromFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSFileAccessor_LoadTextureFromFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSFileAccessor_LoadTextureFromFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSFileAccessor_LoadTextureFromFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSFileAccessor_LoadTextureFromGameSaved_Statics
	{
		struct EOSFileAccessor_eventLoadTextureFromGameSaved_Parms
		{
			UTexture2D* _pcLoadedTexture;
			FString _strFileName;
			FString _strSubDir;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcLoadedTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strFileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strFileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strSubDir_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strSubDir;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSFileAccessor_LoadTextureFromGameSaved_Statics::NewProp__pcLoadedTexture = { "_pcLoadedTexture", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSFileAccessor_eventLoadTextureFromGameSaved_Parms, _pcLoadedTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSFileAccessor_LoadTextureFromGameSaved_Statics::NewProp__strFileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSFileAccessor_LoadTextureFromGameSaved_Statics::NewProp__strFileName = { "_strFileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSFileAccessor_eventLoadTextureFromGameSaved_Parms, _strFileName), METADATA_PARAMS(Z_Construct_UFunction_UEOSFileAccessor_LoadTextureFromGameSaved_Statics::NewProp__strFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSFileAccessor_LoadTextureFromGameSaved_Statics::NewProp__strFileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSFileAccessor_LoadTextureFromGameSaved_Statics::NewProp__strSubDir_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSFileAccessor_LoadTextureFromGameSaved_Statics::NewProp__strSubDir = { "_strSubDir", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSFileAccessor_eventLoadTextureFromGameSaved_Parms, _strSubDir), METADATA_PARAMS(Z_Construct_UFunction_UEOSFileAccessor_LoadTextureFromGameSaved_Statics::NewProp__strSubDir_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSFileAccessor_LoadTextureFromGameSaved_Statics::NewProp__strSubDir_MetaData)) };
	void Z_Construct_UFunction_UEOSFileAccessor_LoadTextureFromGameSaved_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSFileAccessor_eventLoadTextureFromGameSaved_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSFileAccessor_LoadTextureFromGameSaved_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSFileAccessor_eventLoadTextureFromGameSaved_Parms), &Z_Construct_UFunction_UEOSFileAccessor_LoadTextureFromGameSaved_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSFileAccessor_LoadTextureFromGameSaved_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSFileAccessor_LoadTextureFromGameSaved_Statics::NewProp__pcLoadedTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSFileAccessor_LoadTextureFromGameSaved_Statics::NewProp__strFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSFileAccessor_LoadTextureFromGameSaved_Statics::NewProp__strSubDir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSFileAccessor_LoadTextureFromGameSaved_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSFileAccessor_LoadTextureFromGameSaved_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSFileAccessor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSFileAccessor_LoadTextureFromGameSaved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSFileAccessor, nullptr, "LoadTextureFromGameSaved", nullptr, nullptr, sizeof(EOSFileAccessor_eventLoadTextureFromGameSaved_Parms), Z_Construct_UFunction_UEOSFileAccessor_LoadTextureFromGameSaved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSFileAccessor_LoadTextureFromGameSaved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSFileAccessor_LoadTextureFromGameSaved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSFileAccessor_LoadTextureFromGameSaved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSFileAccessor_LoadTextureFromGameSaved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSFileAccessor_LoadTextureFromGameSaved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSFileAccessor_ReadBinary_Statics
	{
		struct EOSFileAccessor_eventReadBinary_Parms
		{
			UEOSUserContentBinary* _pcBinary;
			FString _strPath;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcBinary;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strPath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSFileAccessor_ReadBinary_Statics::NewProp__pcBinary = { "_pcBinary", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSFileAccessor_eventReadBinary_Parms, _pcBinary), Z_Construct_UClass_UEOSUserContentBinary_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSFileAccessor_ReadBinary_Statics::NewProp__strPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSFileAccessor_ReadBinary_Statics::NewProp__strPath = { "_strPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSFileAccessor_eventReadBinary_Parms, _strPath), METADATA_PARAMS(Z_Construct_UFunction_UEOSFileAccessor_ReadBinary_Statics::NewProp__strPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSFileAccessor_ReadBinary_Statics::NewProp__strPath_MetaData)) };
	void Z_Construct_UFunction_UEOSFileAccessor_ReadBinary_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSFileAccessor_eventReadBinary_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSFileAccessor_ReadBinary_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSFileAccessor_eventReadBinary_Parms), &Z_Construct_UFunction_UEOSFileAccessor_ReadBinary_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSFileAccessor_ReadBinary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSFileAccessor_ReadBinary_Statics::NewProp__pcBinary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSFileAccessor_ReadBinary_Statics::NewProp__strPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSFileAccessor_ReadBinary_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSFileAccessor_ReadBinary_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSFileAccessor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSFileAccessor_ReadBinary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSFileAccessor, nullptr, "ReadBinary", nullptr, nullptr, sizeof(EOSFileAccessor_eventReadBinary_Parms), Z_Construct_UFunction_UEOSFileAccessor_ReadBinary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSFileAccessor_ReadBinary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSFileAccessor_ReadBinary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSFileAccessor_ReadBinary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSFileAccessor_ReadBinary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSFileAccessor_ReadBinary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSFileAccessor_ReadBinaryFromGameSavedDir_Statics
	{
		struct EOSFileAccessor_eventReadBinaryFromGameSavedDir_Parms
		{
			UEOSUserContentBinary* _pcBinary;
			FString _strFileName;
			FString _strSubDir;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcBinary;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strFileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strFileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strSubDir_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strSubDir;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSFileAccessor_ReadBinaryFromGameSavedDir_Statics::NewProp__pcBinary = { "_pcBinary", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSFileAccessor_eventReadBinaryFromGameSavedDir_Parms, _pcBinary), Z_Construct_UClass_UEOSUserContentBinary_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSFileAccessor_ReadBinaryFromGameSavedDir_Statics::NewProp__strFileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSFileAccessor_ReadBinaryFromGameSavedDir_Statics::NewProp__strFileName = { "_strFileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSFileAccessor_eventReadBinaryFromGameSavedDir_Parms, _strFileName), METADATA_PARAMS(Z_Construct_UFunction_UEOSFileAccessor_ReadBinaryFromGameSavedDir_Statics::NewProp__strFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSFileAccessor_ReadBinaryFromGameSavedDir_Statics::NewProp__strFileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSFileAccessor_ReadBinaryFromGameSavedDir_Statics::NewProp__strSubDir_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSFileAccessor_ReadBinaryFromGameSavedDir_Statics::NewProp__strSubDir = { "_strSubDir", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSFileAccessor_eventReadBinaryFromGameSavedDir_Parms, _strSubDir), METADATA_PARAMS(Z_Construct_UFunction_UEOSFileAccessor_ReadBinaryFromGameSavedDir_Statics::NewProp__strSubDir_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSFileAccessor_ReadBinaryFromGameSavedDir_Statics::NewProp__strSubDir_MetaData)) };
	void Z_Construct_UFunction_UEOSFileAccessor_ReadBinaryFromGameSavedDir_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSFileAccessor_eventReadBinaryFromGameSavedDir_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSFileAccessor_ReadBinaryFromGameSavedDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSFileAccessor_eventReadBinaryFromGameSavedDir_Parms), &Z_Construct_UFunction_UEOSFileAccessor_ReadBinaryFromGameSavedDir_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSFileAccessor_ReadBinaryFromGameSavedDir_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSFileAccessor_ReadBinaryFromGameSavedDir_Statics::NewProp__pcBinary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSFileAccessor_ReadBinaryFromGameSavedDir_Statics::NewProp__strFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSFileAccessor_ReadBinaryFromGameSavedDir_Statics::NewProp__strSubDir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSFileAccessor_ReadBinaryFromGameSavedDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSFileAccessor_ReadBinaryFromGameSavedDir_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSFileAccessor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSFileAccessor_ReadBinaryFromGameSavedDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSFileAccessor, nullptr, "ReadBinaryFromGameSavedDir", nullptr, nullptr, sizeof(EOSFileAccessor_eventReadBinaryFromGameSavedDir_Parms), Z_Construct_UFunction_UEOSFileAccessor_ReadBinaryFromGameSavedDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSFileAccessor_ReadBinaryFromGameSavedDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSFileAccessor_ReadBinaryFromGameSavedDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSFileAccessor_ReadBinaryFromGameSavedDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSFileAccessor_ReadBinaryFromGameSavedDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSFileAccessor_ReadBinaryFromGameSavedDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSFileAccessor_WriteBinary_Statics
	{
		struct EOSFileAccessor_eventWriteBinary_Parms
		{
			UEOSUserContentBinary* _pcBinary;
			FString _strPath;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcBinary;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strPath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSFileAccessor_WriteBinary_Statics::NewProp__pcBinary = { "_pcBinary", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSFileAccessor_eventWriteBinary_Parms, _pcBinary), Z_Construct_UClass_UEOSUserContentBinary_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSFileAccessor_WriteBinary_Statics::NewProp__strPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSFileAccessor_WriteBinary_Statics::NewProp__strPath = { "_strPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSFileAccessor_eventWriteBinary_Parms, _strPath), METADATA_PARAMS(Z_Construct_UFunction_UEOSFileAccessor_WriteBinary_Statics::NewProp__strPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSFileAccessor_WriteBinary_Statics::NewProp__strPath_MetaData)) };
	void Z_Construct_UFunction_UEOSFileAccessor_WriteBinary_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSFileAccessor_eventWriteBinary_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSFileAccessor_WriteBinary_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSFileAccessor_eventWriteBinary_Parms), &Z_Construct_UFunction_UEOSFileAccessor_WriteBinary_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSFileAccessor_WriteBinary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSFileAccessor_WriteBinary_Statics::NewProp__pcBinary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSFileAccessor_WriteBinary_Statics::NewProp__strPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSFileAccessor_WriteBinary_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSFileAccessor_WriteBinary_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSFileAccessor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSFileAccessor_WriteBinary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSFileAccessor, nullptr, "WriteBinary", nullptr, nullptr, sizeof(EOSFileAccessor_eventWriteBinary_Parms), Z_Construct_UFunction_UEOSFileAccessor_WriteBinary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSFileAccessor_WriteBinary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSFileAccessor_WriteBinary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSFileAccessor_WriteBinary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSFileAccessor_WriteBinary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSFileAccessor_WriteBinary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSFileAccessor_WriteBinaryToGameSavedDir_Statics
	{
		struct EOSFileAccessor_eventWriteBinaryToGameSavedDir_Parms
		{
			UEOSUserContentBinary* _pcBinary;
			FString _strFileName;
			FString _strSubDir;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcBinary;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strFileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strFileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strSubDir_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strSubDir;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSFileAccessor_WriteBinaryToGameSavedDir_Statics::NewProp__pcBinary = { "_pcBinary", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSFileAccessor_eventWriteBinaryToGameSavedDir_Parms, _pcBinary), Z_Construct_UClass_UEOSUserContentBinary_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSFileAccessor_WriteBinaryToGameSavedDir_Statics::NewProp__strFileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSFileAccessor_WriteBinaryToGameSavedDir_Statics::NewProp__strFileName = { "_strFileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSFileAccessor_eventWriteBinaryToGameSavedDir_Parms, _strFileName), METADATA_PARAMS(Z_Construct_UFunction_UEOSFileAccessor_WriteBinaryToGameSavedDir_Statics::NewProp__strFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSFileAccessor_WriteBinaryToGameSavedDir_Statics::NewProp__strFileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSFileAccessor_WriteBinaryToGameSavedDir_Statics::NewProp__strSubDir_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSFileAccessor_WriteBinaryToGameSavedDir_Statics::NewProp__strSubDir = { "_strSubDir", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSFileAccessor_eventWriteBinaryToGameSavedDir_Parms, _strSubDir), METADATA_PARAMS(Z_Construct_UFunction_UEOSFileAccessor_WriteBinaryToGameSavedDir_Statics::NewProp__strSubDir_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSFileAccessor_WriteBinaryToGameSavedDir_Statics::NewProp__strSubDir_MetaData)) };
	void Z_Construct_UFunction_UEOSFileAccessor_WriteBinaryToGameSavedDir_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSFileAccessor_eventWriteBinaryToGameSavedDir_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSFileAccessor_WriteBinaryToGameSavedDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSFileAccessor_eventWriteBinaryToGameSavedDir_Parms), &Z_Construct_UFunction_UEOSFileAccessor_WriteBinaryToGameSavedDir_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSFileAccessor_WriteBinaryToGameSavedDir_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSFileAccessor_WriteBinaryToGameSavedDir_Statics::NewProp__pcBinary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSFileAccessor_WriteBinaryToGameSavedDir_Statics::NewProp__strFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSFileAccessor_WriteBinaryToGameSavedDir_Statics::NewProp__strSubDir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSFileAccessor_WriteBinaryToGameSavedDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSFileAccessor_WriteBinaryToGameSavedDir_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSFileAccessor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSFileAccessor_WriteBinaryToGameSavedDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSFileAccessor, nullptr, "WriteBinaryToGameSavedDir", nullptr, nullptr, sizeof(EOSFileAccessor_eventWriteBinaryToGameSavedDir_Parms), Z_Construct_UFunction_UEOSFileAccessor_WriteBinaryToGameSavedDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSFileAccessor_WriteBinaryToGameSavedDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSFileAccessor_WriteBinaryToGameSavedDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSFileAccessor_WriteBinaryToGameSavedDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSFileAccessor_WriteBinaryToGameSavedDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSFileAccessor_WriteBinaryToGameSavedDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSFileAccessor_NoRegister()
	{
		return UEOSFileAccessor::StaticClass();
	}
	struct Z_Construct_UClass_UEOSFileAccessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSFileAccessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCommon,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSFileAccessor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSFileAccessor_GetSaveDataPath, "GetSaveDataPath" }, // 184105185
		{ &Z_Construct_UFunction_UEOSFileAccessor_IsExistFile, "IsExistFile" }, // 450071649
		{ &Z_Construct_UFunction_UEOSFileAccessor_LoadTextureFromFile, "LoadTextureFromFile" }, // 835758389
		{ &Z_Construct_UFunction_UEOSFileAccessor_LoadTextureFromGameSaved, "LoadTextureFromGameSaved" }, // 768740063
		{ &Z_Construct_UFunction_UEOSFileAccessor_ReadBinary, "ReadBinary" }, // 1770329908
		{ &Z_Construct_UFunction_UEOSFileAccessor_ReadBinaryFromGameSavedDir, "ReadBinaryFromGameSavedDir" }, // 2534345103
		{ &Z_Construct_UFunction_UEOSFileAccessor_WriteBinary, "WriteBinary" }, // 1675685520
		{ &Z_Construct_UFunction_UEOSFileAccessor_WriteBinaryToGameSavedDir, "WriteBinaryToGameSavedDir" }, // 909912171
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSFileAccessor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSFileAccessor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSFileAccessor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSFileAccessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSFileAccessor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSFileAccessor_Statics::ClassParams = {
		&UEOSFileAccessor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSFileAccessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSFileAccessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSFileAccessor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSFileAccessor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSFileAccessor, 3035997220);
	template<> YEOSSDK_API UClass* StaticClass<UEOSFileAccessor>()
	{
		return UEOSFileAccessor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSFileAccessor(Z_Construct_UClass_UEOSFileAccessor, &UEOSFileAccessor::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSFileAccessor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSFileAccessor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
