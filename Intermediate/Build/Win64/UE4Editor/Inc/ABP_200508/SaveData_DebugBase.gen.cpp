// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SaveData_DebugBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveData_DebugBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_USaveData_DebugBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_USaveData_DebugBase();
	ABP_200508_API UClass* Z_Construct_UClass_UELDebugMenuRootBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_USaveDataSystem_NoRegister();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_SaveData_DebugDispatcher__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USaveData_DebugBase::execExportFiles)
	{
		P_GET_UBOOL(Z_Param__bProjectSavedDir);
		P_GET_PROPERTY(FStrProperty,Z_Param__strExportPath);
		P_GET_PROPERTY(FStrProperty,Z_Param__strFilterName);
		P_GET_OBJECT(USaveDataSystem,Z_Param__pcSaveDataSystem);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ExportFiles(Z_Param__bProjectSavedDir,Z_Param__strExportPath,Z_Param__strFilterName,Z_Param__pcSaveDataSystem);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveData_DebugBase::execExportTexts)
	{
		P_GET_UBOOL(Z_Param__bProjectSavedDir);
		P_GET_PROPERTY(FStrProperty,Z_Param__strExportPath);
		P_GET_PROPERTY(FStrProperty,Z_Param__strFilterName);
		P_GET_OBJECT(USaveDataSystem,Z_Param__pcSaveDataSystem);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ExportTexts(Z_Param__bProjectSavedDir,Z_Param__strExportPath,Z_Param__strFilterName,Z_Param__pcSaveDataSystem);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveData_DebugBase::execGetServerLoginInfo)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out__strDevAuthSrv);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out__strName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetServerLoginInfo(Z_Param_Out__strDevAuthSrv,Z_Param_Out__strName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveData_DebugBase::execImportFiles)
	{
		P_GET_TARRAY(FString,Z_Param__strFileList);
		P_GET_OBJECT(USaveDataSystem,Z_Param__pcSaveDataSystem);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ImportFiles(Z_Param__strFileList,Z_Param__pcSaveDataSystem);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveData_DebugBase::execIsEnableOnline)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEnableOnline();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveData_DebugBase::execIsLoggedOn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLoggedOn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveData_DebugBase::execSetEnableOnline)
	{
		P_GET_UBOOL(Z_Param__bEnableOnline);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnableOnline(Z_Param__bEnableOnline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveData_DebugBase::execSetLoggedOn)
	{
		P_GET_UBOOL(Z_Param__bLoggedIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLoggedOn(Z_Param__bLoggedIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveData_DebugBase::execSetServerLoginInfo)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strDevAuthSrv);
		P_GET_PROPERTY(FStrProperty,Z_Param__strName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetServerLoginInfo(Z_Param__strDevAuthSrv,Z_Param__strName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveData_DebugBase::execStartDataReset)
	{
		P_GET_UBOOL(Z_Param__bProjectSavedDir);
		P_GET_PROPERTY(FStrProperty,Z_Param__strTargetFileName);
		P_GET_OBJECT(USaveDataSystem,Z_Param__pcSaveDataSystem);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StartDataReset(Z_Param__bProjectSavedDir,Z_Param__strTargetFileName,Z_Param__pcSaveDataSystem);
		P_NATIVE_END;
	}
	void USaveData_DebugBase::StaticRegisterNativesUSaveData_DebugBase()
	{
		UClass* Class = USaveData_DebugBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExportFiles", &USaveData_DebugBase::execExportFiles },
			{ "ExportTexts", &USaveData_DebugBase::execExportTexts },
			{ "GetServerLoginInfo", &USaveData_DebugBase::execGetServerLoginInfo },
			{ "ImportFiles", &USaveData_DebugBase::execImportFiles },
			{ "IsEnableOnline", &USaveData_DebugBase::execIsEnableOnline },
			{ "IsLoggedOn", &USaveData_DebugBase::execIsLoggedOn },
			{ "SetEnableOnline", &USaveData_DebugBase::execSetEnableOnline },
			{ "SetLoggedOn", &USaveData_DebugBase::execSetLoggedOn },
			{ "SetServerLoginInfo", &USaveData_DebugBase::execSetServerLoginInfo },
			{ "StartDataReset", &USaveData_DebugBase::execStartDataReset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USaveData_DebugBase_ExportFiles_Statics
	{
		struct SaveData_DebugBase_eventExportFiles_Parms
		{
			bool _bProjectSavedDir;
			FString _strExportPath;
			FString _strFilterName;
			USaveDataSystem* _pcSaveDataSystem;
			bool ReturnValue;
		};
		static void NewProp__bProjectSavedDir_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bProjectSavedDir;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strExportPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strExportPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strFilterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strFilterName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcSaveDataSystem;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USaveData_DebugBase_ExportFiles_Statics::NewProp__bProjectSavedDir_SetBit(void* Obj)
	{
		((SaveData_DebugBase_eventExportFiles_Parms*)Obj)->_bProjectSavedDir = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveData_DebugBase_ExportFiles_Statics::NewProp__bProjectSavedDir = { "_bProjectSavedDir", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveData_DebugBase_eventExportFiles_Parms), &Z_Construct_UFunction_USaveData_DebugBase_ExportFiles_Statics::NewProp__bProjectSavedDir_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_DebugBase_ExportFiles_Statics::NewProp__strExportPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveData_DebugBase_ExportFiles_Statics::NewProp__strExportPath = { "_strExportPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_DebugBase_eventExportFiles_Parms, _strExportPath), METADATA_PARAMS(Z_Construct_UFunction_USaveData_DebugBase_ExportFiles_Statics::NewProp__strExportPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_DebugBase_ExportFiles_Statics::NewProp__strExportPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_DebugBase_ExportFiles_Statics::NewProp__strFilterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveData_DebugBase_ExportFiles_Statics::NewProp__strFilterName = { "_strFilterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_DebugBase_eventExportFiles_Parms, _strFilterName), METADATA_PARAMS(Z_Construct_UFunction_USaveData_DebugBase_ExportFiles_Statics::NewProp__strFilterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_DebugBase_ExportFiles_Statics::NewProp__strFilterName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveData_DebugBase_ExportFiles_Statics::NewProp__pcSaveDataSystem = { "_pcSaveDataSystem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_DebugBase_eventExportFiles_Parms, _pcSaveDataSystem), Z_Construct_UClass_USaveDataSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveData_DebugBase_ExportFiles_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveData_DebugBase_eventExportFiles_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveData_DebugBase_ExportFiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveData_DebugBase_eventExportFiles_Parms), &Z_Construct_UFunction_USaveData_DebugBase_ExportFiles_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_DebugBase_ExportFiles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_DebugBase_ExportFiles_Statics::NewProp__bProjectSavedDir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_DebugBase_ExportFiles_Statics::NewProp__strExportPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_DebugBase_ExportFiles_Statics::NewProp__strFilterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_DebugBase_ExportFiles_Statics::NewProp__pcSaveDataSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_DebugBase_ExportFiles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_DebugBase_ExportFiles_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_DebugBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_DebugBase_ExportFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_DebugBase, nullptr, "ExportFiles", nullptr, nullptr, sizeof(SaveData_DebugBase_eventExportFiles_Parms), Z_Construct_UFunction_USaveData_DebugBase_ExportFiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_DebugBase_ExportFiles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_DebugBase_ExportFiles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_DebugBase_ExportFiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_DebugBase_ExportFiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_DebugBase_ExportFiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveData_DebugBase_ExportTexts_Statics
	{
		struct SaveData_DebugBase_eventExportTexts_Parms
		{
			bool _bProjectSavedDir;
			FString _strExportPath;
			FString _strFilterName;
			USaveDataSystem* _pcSaveDataSystem;
			bool ReturnValue;
		};
		static void NewProp__bProjectSavedDir_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bProjectSavedDir;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strExportPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strExportPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strFilterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strFilterName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcSaveDataSystem;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USaveData_DebugBase_ExportTexts_Statics::NewProp__bProjectSavedDir_SetBit(void* Obj)
	{
		((SaveData_DebugBase_eventExportTexts_Parms*)Obj)->_bProjectSavedDir = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveData_DebugBase_ExportTexts_Statics::NewProp__bProjectSavedDir = { "_bProjectSavedDir", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveData_DebugBase_eventExportTexts_Parms), &Z_Construct_UFunction_USaveData_DebugBase_ExportTexts_Statics::NewProp__bProjectSavedDir_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_DebugBase_ExportTexts_Statics::NewProp__strExportPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveData_DebugBase_ExportTexts_Statics::NewProp__strExportPath = { "_strExportPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_DebugBase_eventExportTexts_Parms, _strExportPath), METADATA_PARAMS(Z_Construct_UFunction_USaveData_DebugBase_ExportTexts_Statics::NewProp__strExportPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_DebugBase_ExportTexts_Statics::NewProp__strExportPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_DebugBase_ExportTexts_Statics::NewProp__strFilterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveData_DebugBase_ExportTexts_Statics::NewProp__strFilterName = { "_strFilterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_DebugBase_eventExportTexts_Parms, _strFilterName), METADATA_PARAMS(Z_Construct_UFunction_USaveData_DebugBase_ExportTexts_Statics::NewProp__strFilterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_DebugBase_ExportTexts_Statics::NewProp__strFilterName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveData_DebugBase_ExportTexts_Statics::NewProp__pcSaveDataSystem = { "_pcSaveDataSystem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_DebugBase_eventExportTexts_Parms, _pcSaveDataSystem), Z_Construct_UClass_USaveDataSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveData_DebugBase_ExportTexts_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveData_DebugBase_eventExportTexts_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveData_DebugBase_ExportTexts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveData_DebugBase_eventExportTexts_Parms), &Z_Construct_UFunction_USaveData_DebugBase_ExportTexts_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_DebugBase_ExportTexts_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_DebugBase_ExportTexts_Statics::NewProp__bProjectSavedDir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_DebugBase_ExportTexts_Statics::NewProp__strExportPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_DebugBase_ExportTexts_Statics::NewProp__strFilterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_DebugBase_ExportTexts_Statics::NewProp__pcSaveDataSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_DebugBase_ExportTexts_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_DebugBase_ExportTexts_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_DebugBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_DebugBase_ExportTexts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_DebugBase, nullptr, "ExportTexts", nullptr, nullptr, sizeof(SaveData_DebugBase_eventExportTexts_Parms), Z_Construct_UFunction_USaveData_DebugBase_ExportTexts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_DebugBase_ExportTexts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_DebugBase_ExportTexts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_DebugBase_ExportTexts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_DebugBase_ExportTexts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_DebugBase_ExportTexts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveData_DebugBase_GetServerLoginInfo_Statics
	{
		struct SaveData_DebugBase_eventGetServerLoginInfo_Parms
		{
			FString _strDevAuthSrv;
			FString _strName;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strDevAuthSrv;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveData_DebugBase_GetServerLoginInfo_Statics::NewProp__strDevAuthSrv = { "_strDevAuthSrv", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_DebugBase_eventGetServerLoginInfo_Parms, _strDevAuthSrv), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveData_DebugBase_GetServerLoginInfo_Statics::NewProp__strName = { "_strName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_DebugBase_eventGetServerLoginInfo_Parms, _strName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveData_DebugBase_GetServerLoginInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveData_DebugBase_eventGetServerLoginInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveData_DebugBase_GetServerLoginInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveData_DebugBase_eventGetServerLoginInfo_Parms), &Z_Construct_UFunction_USaveData_DebugBase_GetServerLoginInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_DebugBase_GetServerLoginInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_DebugBase_GetServerLoginInfo_Statics::NewProp__strDevAuthSrv,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_DebugBase_GetServerLoginInfo_Statics::NewProp__strName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_DebugBase_GetServerLoginInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_DebugBase_GetServerLoginInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_DebugBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_DebugBase_GetServerLoginInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_DebugBase, nullptr, "GetServerLoginInfo", nullptr, nullptr, sizeof(SaveData_DebugBase_eventGetServerLoginInfo_Parms), Z_Construct_UFunction_USaveData_DebugBase_GetServerLoginInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_DebugBase_GetServerLoginInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_DebugBase_GetServerLoginInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_DebugBase_GetServerLoginInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_DebugBase_GetServerLoginInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_DebugBase_GetServerLoginInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveData_DebugBase_ImportFiles_Statics
	{
		struct SaveData_DebugBase_eventImportFiles_Parms
		{
			TArray<FString> _strFileList;
			USaveDataSystem* _pcSaveDataSystem;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strFileList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__strFileList;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcSaveDataSystem;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveData_DebugBase_ImportFiles_Statics::NewProp__strFileList_Inner = { "_strFileList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveData_DebugBase_ImportFiles_Statics::NewProp__strFileList = { "_strFileList", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_DebugBase_eventImportFiles_Parms, _strFileList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveData_DebugBase_ImportFiles_Statics::NewProp__pcSaveDataSystem = { "_pcSaveDataSystem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_DebugBase_eventImportFiles_Parms, _pcSaveDataSystem), Z_Construct_UClass_USaveDataSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveData_DebugBase_ImportFiles_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveData_DebugBase_eventImportFiles_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveData_DebugBase_ImportFiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveData_DebugBase_eventImportFiles_Parms), &Z_Construct_UFunction_USaveData_DebugBase_ImportFiles_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_DebugBase_ImportFiles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_DebugBase_ImportFiles_Statics::NewProp__strFileList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_DebugBase_ImportFiles_Statics::NewProp__strFileList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_DebugBase_ImportFiles_Statics::NewProp__pcSaveDataSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_DebugBase_ImportFiles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_DebugBase_ImportFiles_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_DebugBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_DebugBase_ImportFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_DebugBase, nullptr, "ImportFiles", nullptr, nullptr, sizeof(SaveData_DebugBase_eventImportFiles_Parms), Z_Construct_UFunction_USaveData_DebugBase_ImportFiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_DebugBase_ImportFiles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_DebugBase_ImportFiles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_DebugBase_ImportFiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_DebugBase_ImportFiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_DebugBase_ImportFiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveData_DebugBase_IsEnableOnline_Statics
	{
		struct SaveData_DebugBase_eventIsEnableOnline_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USaveData_DebugBase_IsEnableOnline_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveData_DebugBase_eventIsEnableOnline_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveData_DebugBase_IsEnableOnline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveData_DebugBase_eventIsEnableOnline_Parms), &Z_Construct_UFunction_USaveData_DebugBase_IsEnableOnline_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_DebugBase_IsEnableOnline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_DebugBase_IsEnableOnline_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_DebugBase_IsEnableOnline_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_DebugBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_DebugBase_IsEnableOnline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_DebugBase, nullptr, "IsEnableOnline", nullptr, nullptr, sizeof(SaveData_DebugBase_eventIsEnableOnline_Parms), Z_Construct_UFunction_USaveData_DebugBase_IsEnableOnline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_DebugBase_IsEnableOnline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_DebugBase_IsEnableOnline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_DebugBase_IsEnableOnline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_DebugBase_IsEnableOnline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_DebugBase_IsEnableOnline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveData_DebugBase_IsLoggedOn_Statics
	{
		struct SaveData_DebugBase_eventIsLoggedOn_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USaveData_DebugBase_IsLoggedOn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveData_DebugBase_eventIsLoggedOn_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveData_DebugBase_IsLoggedOn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveData_DebugBase_eventIsLoggedOn_Parms), &Z_Construct_UFunction_USaveData_DebugBase_IsLoggedOn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_DebugBase_IsLoggedOn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_DebugBase_IsLoggedOn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_DebugBase_IsLoggedOn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_DebugBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_DebugBase_IsLoggedOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_DebugBase, nullptr, "IsLoggedOn", nullptr, nullptr, sizeof(SaveData_DebugBase_eventIsLoggedOn_Parms), Z_Construct_UFunction_USaveData_DebugBase_IsLoggedOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_DebugBase_IsLoggedOn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_DebugBase_IsLoggedOn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_DebugBase_IsLoggedOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_DebugBase_IsLoggedOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_DebugBase_IsLoggedOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveData_DebugBase_SetEnableOnline_Statics
	{
		struct SaveData_DebugBase_eventSetEnableOnline_Parms
		{
			bool _bEnableOnline;
		};
		static void NewProp__bEnableOnline_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bEnableOnline;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USaveData_DebugBase_SetEnableOnline_Statics::NewProp__bEnableOnline_SetBit(void* Obj)
	{
		((SaveData_DebugBase_eventSetEnableOnline_Parms*)Obj)->_bEnableOnline = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveData_DebugBase_SetEnableOnline_Statics::NewProp__bEnableOnline = { "_bEnableOnline", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveData_DebugBase_eventSetEnableOnline_Parms), &Z_Construct_UFunction_USaveData_DebugBase_SetEnableOnline_Statics::NewProp__bEnableOnline_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_DebugBase_SetEnableOnline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_DebugBase_SetEnableOnline_Statics::NewProp__bEnableOnline,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_DebugBase_SetEnableOnline_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_DebugBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_DebugBase_SetEnableOnline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_DebugBase, nullptr, "SetEnableOnline", nullptr, nullptr, sizeof(SaveData_DebugBase_eventSetEnableOnline_Parms), Z_Construct_UFunction_USaveData_DebugBase_SetEnableOnline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_DebugBase_SetEnableOnline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_DebugBase_SetEnableOnline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_DebugBase_SetEnableOnline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_DebugBase_SetEnableOnline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_DebugBase_SetEnableOnline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveData_DebugBase_SetLoggedOn_Statics
	{
		struct SaveData_DebugBase_eventSetLoggedOn_Parms
		{
			bool _bLoggedIn;
		};
		static void NewProp__bLoggedIn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bLoggedIn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USaveData_DebugBase_SetLoggedOn_Statics::NewProp__bLoggedIn_SetBit(void* Obj)
	{
		((SaveData_DebugBase_eventSetLoggedOn_Parms*)Obj)->_bLoggedIn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveData_DebugBase_SetLoggedOn_Statics::NewProp__bLoggedIn = { "_bLoggedIn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveData_DebugBase_eventSetLoggedOn_Parms), &Z_Construct_UFunction_USaveData_DebugBase_SetLoggedOn_Statics::NewProp__bLoggedIn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_DebugBase_SetLoggedOn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_DebugBase_SetLoggedOn_Statics::NewProp__bLoggedIn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_DebugBase_SetLoggedOn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_DebugBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_DebugBase_SetLoggedOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_DebugBase, nullptr, "SetLoggedOn", nullptr, nullptr, sizeof(SaveData_DebugBase_eventSetLoggedOn_Parms), Z_Construct_UFunction_USaveData_DebugBase_SetLoggedOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_DebugBase_SetLoggedOn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_DebugBase_SetLoggedOn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_DebugBase_SetLoggedOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_DebugBase_SetLoggedOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_DebugBase_SetLoggedOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveData_DebugBase_SetServerLoginInfo_Statics
	{
		struct SaveData_DebugBase_eventSetServerLoginInfo_Parms
		{
			FString _strDevAuthSrv;
			FString _strName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strDevAuthSrv_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strDevAuthSrv;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_DebugBase_SetServerLoginInfo_Statics::NewProp__strDevAuthSrv_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveData_DebugBase_SetServerLoginInfo_Statics::NewProp__strDevAuthSrv = { "_strDevAuthSrv", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_DebugBase_eventSetServerLoginInfo_Parms, _strDevAuthSrv), METADATA_PARAMS(Z_Construct_UFunction_USaveData_DebugBase_SetServerLoginInfo_Statics::NewProp__strDevAuthSrv_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_DebugBase_SetServerLoginInfo_Statics::NewProp__strDevAuthSrv_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_DebugBase_SetServerLoginInfo_Statics::NewProp__strName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveData_DebugBase_SetServerLoginInfo_Statics::NewProp__strName = { "_strName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_DebugBase_eventSetServerLoginInfo_Parms, _strName), METADATA_PARAMS(Z_Construct_UFunction_USaveData_DebugBase_SetServerLoginInfo_Statics::NewProp__strName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_DebugBase_SetServerLoginInfo_Statics::NewProp__strName_MetaData)) };
	void Z_Construct_UFunction_USaveData_DebugBase_SetServerLoginInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveData_DebugBase_eventSetServerLoginInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveData_DebugBase_SetServerLoginInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveData_DebugBase_eventSetServerLoginInfo_Parms), &Z_Construct_UFunction_USaveData_DebugBase_SetServerLoginInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_DebugBase_SetServerLoginInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_DebugBase_SetServerLoginInfo_Statics::NewProp__strDevAuthSrv,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_DebugBase_SetServerLoginInfo_Statics::NewProp__strName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_DebugBase_SetServerLoginInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_DebugBase_SetServerLoginInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_DebugBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_DebugBase_SetServerLoginInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_DebugBase, nullptr, "SetServerLoginInfo", nullptr, nullptr, sizeof(SaveData_DebugBase_eventSetServerLoginInfo_Parms), Z_Construct_UFunction_USaveData_DebugBase_SetServerLoginInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_DebugBase_SetServerLoginInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_DebugBase_SetServerLoginInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_DebugBase_SetServerLoginInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_DebugBase_SetServerLoginInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_DebugBase_SetServerLoginInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveData_DebugBase_StartDataReset_Statics
	{
		struct SaveData_DebugBase_eventStartDataReset_Parms
		{
			bool _bProjectSavedDir;
			FString _strTargetFileName;
			USaveDataSystem* _pcSaveDataSystem;
			bool ReturnValue;
		};
		static void NewProp__bProjectSavedDir_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bProjectSavedDir;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strTargetFileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strTargetFileName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcSaveDataSystem;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USaveData_DebugBase_StartDataReset_Statics::NewProp__bProjectSavedDir_SetBit(void* Obj)
	{
		((SaveData_DebugBase_eventStartDataReset_Parms*)Obj)->_bProjectSavedDir = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveData_DebugBase_StartDataReset_Statics::NewProp__bProjectSavedDir = { "_bProjectSavedDir", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveData_DebugBase_eventStartDataReset_Parms), &Z_Construct_UFunction_USaveData_DebugBase_StartDataReset_Statics::NewProp__bProjectSavedDir_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_DebugBase_StartDataReset_Statics::NewProp__strTargetFileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveData_DebugBase_StartDataReset_Statics::NewProp__strTargetFileName = { "_strTargetFileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_DebugBase_eventStartDataReset_Parms, _strTargetFileName), METADATA_PARAMS(Z_Construct_UFunction_USaveData_DebugBase_StartDataReset_Statics::NewProp__strTargetFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_DebugBase_StartDataReset_Statics::NewProp__strTargetFileName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveData_DebugBase_StartDataReset_Statics::NewProp__pcSaveDataSystem = { "_pcSaveDataSystem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_DebugBase_eventStartDataReset_Parms, _pcSaveDataSystem), Z_Construct_UClass_USaveDataSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveData_DebugBase_StartDataReset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveData_DebugBase_eventStartDataReset_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveData_DebugBase_StartDataReset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveData_DebugBase_eventStartDataReset_Parms), &Z_Construct_UFunction_USaveData_DebugBase_StartDataReset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_DebugBase_StartDataReset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_DebugBase_StartDataReset_Statics::NewProp__bProjectSavedDir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_DebugBase_StartDataReset_Statics::NewProp__strTargetFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_DebugBase_StartDataReset_Statics::NewProp__pcSaveDataSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_DebugBase_StartDataReset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_DebugBase_StartDataReset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_DebugBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_DebugBase_StartDataReset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_DebugBase, nullptr, "StartDataReset", nullptr, nullptr, sizeof(SaveData_DebugBase_eventStartDataReset_Parms), Z_Construct_UFunction_USaveData_DebugBase_StartDataReset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_DebugBase_StartDataReset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_DebugBase_StartDataReset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_DebugBase_StartDataReset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_DebugBase_StartDataReset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_DebugBase_StartDataReset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USaveData_DebugBase_NoRegister()
	{
		return USaveData_DebugBase::StaticClass();
	}
	struct Z_Construct_UClass_USaveData_DebugBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveData_DebugDispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SaveData_DebugDispatcher;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveData_DebugBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELDebugMenuRootBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USaveData_DebugBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USaveData_DebugBase_ExportFiles, "ExportFiles" }, // 2979956788
		{ &Z_Construct_UFunction_USaveData_DebugBase_ExportTexts, "ExportTexts" }, // 258930825
		{ &Z_Construct_UFunction_USaveData_DebugBase_GetServerLoginInfo, "GetServerLoginInfo" }, // 3289597367
		{ &Z_Construct_UFunction_USaveData_DebugBase_ImportFiles, "ImportFiles" }, // 731639404
		{ &Z_Construct_UFunction_USaveData_DebugBase_IsEnableOnline, "IsEnableOnline" }, // 702269991
		{ &Z_Construct_UFunction_USaveData_DebugBase_IsLoggedOn, "IsLoggedOn" }, // 554086016
		{ &Z_Construct_UFunction_USaveData_DebugBase_SetEnableOnline, "SetEnableOnline" }, // 2694925305
		{ &Z_Construct_UFunction_USaveData_DebugBase_SetLoggedOn, "SetLoggedOn" }, // 2574537715
		{ &Z_Construct_UFunction_USaveData_DebugBase_SetServerLoginInfo, "SetServerLoginInfo" }, // 2744339747
		{ &Z_Construct_UFunction_USaveData_DebugBase_StartDataReset, "StartDataReset" }, // 509602081
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_DebugBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SaveData_DebugBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SaveData_DebugBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_DebugBase_Statics::NewProp_SaveData_DebugDispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveData_DebugBase" },
		{ "ModuleRelativePath", "Public/SaveData_DebugBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USaveData_DebugBase_Statics::NewProp_SaveData_DebugDispatcher = { "SaveData_DebugDispatcher", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveData_DebugBase, SaveData_DebugDispatcher), Z_Construct_UDelegateFunction_ABP_200508_SaveData_DebugDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USaveData_DebugBase_Statics::NewProp_SaveData_DebugDispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_DebugBase_Statics::NewProp_SaveData_DebugDispatcher_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveData_DebugBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_DebugBase_Statics::NewProp_SaveData_DebugDispatcher,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveData_DebugBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveData_DebugBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveData_DebugBase_Statics::ClassParams = {
		&USaveData_DebugBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USaveData_DebugBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_DebugBase_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USaveData_DebugBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_DebugBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveData_DebugBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveData_DebugBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveData_DebugBase, 1393343818);
	template<> ABP_200508_API UClass* StaticClass<USaveData_DebugBase>()
	{
		return USaveData_DebugBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveData_DebugBase(Z_Construct_UClass_USaveData_DebugBase, &USaveData_DebugBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("USaveData_DebugBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveData_DebugBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
