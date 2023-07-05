// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/CustomWrestlerSubsystems.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomWrestlerSubsystems() {}
// Cross Module References
	CREATION_API UClass* Z_Construct_UClass_UCustomWrestlerSubsystems_NoRegister();
	CREATION_API UClass* Z_Construct_UClass_UCustomWrestlerSubsystems();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_Creation();
	CREATION_API UEnum* Z_Construct_UEnum_Creation_EFaceType();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditPaint();
	ELITE_CORE_API UEnum* Z_Construct_UEnum_ELITE_Core_EGender();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditParts();
	CREATION_API UClass* Z_Construct_UClass_UEditWrestlerPaintAsset_NoRegister();
	CREATION_API UClass* Z_Construct_UClass_UEditWrestlerPartsAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCustomWrestlerSubsystems::execFindFaceType)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PartsID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EFaceType*)Z_Param__Result=P_THIS->FindFaceType(Z_Param_PartsID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerSubsystems::execGetCustomPaintList)
	{
		P_GET_TARRAY_REF(FEditPaint,Z_Param_Out_OutList);
		P_GET_ENUM(EGender,Z_Param_Gender);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCustomPaintList(Z_Param_Out_OutList,EGender(Z_Param_Gender));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerSubsystems::execGetCustomPartsList)
	{
		P_GET_TARRAY_REF(FEditParts,Z_Param_Out_OutList);
		P_GET_ENUM(EGender,Z_Param_Gender);
		P_GET_ENUM(EFaceType,Z_Param_FaceType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCustomPartsList(Z_Param_Out_OutList,EGender(Z_Param_Gender),EFaceType(Z_Param_FaceType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerSubsystems::execGetPaintAsset)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PaintID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSoftObjectPtr<UEditWrestlerPaintAsset>*)Z_Param__Result=P_THIS->GetPaintAsset(Z_Param_PaintID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerSubsystems::execGetPartsAsset)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PartsID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSoftObjectPtr<UEditWrestlerPartsAsset>*)Z_Param__Result=P_THIS->GetPartsAsset(Z_Param_PartsID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerSubsystems::execReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerSubsystems::execSetEditPaintListTableOnlyEditor)
	{
		P_GET_OBJECT(UDataTable,Z_Param_DataTable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEditPaintListTableOnlyEditor(Z_Param_DataTable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerSubsystems::execSetEditPartsListTableOnlyEditor)
	{
		P_GET_OBJECT(UDataTable,Z_Param_DataTable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEditPartsListTableOnlyEditor(Z_Param_DataTable);
		P_NATIVE_END;
	}
	void UCustomWrestlerSubsystems::StaticRegisterNativesUCustomWrestlerSubsystems()
	{
		UClass* Class = UCustomWrestlerSubsystems::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindFaceType", &UCustomWrestlerSubsystems::execFindFaceType },
			{ "GetCustomPaintList", &UCustomWrestlerSubsystems::execGetCustomPaintList },
			{ "GetCustomPartsList", &UCustomWrestlerSubsystems::execGetCustomPartsList },
			{ "GetPaintAsset", &UCustomWrestlerSubsystems::execGetPaintAsset },
			{ "GetPartsAsset", &UCustomWrestlerSubsystems::execGetPartsAsset },
			{ "Reset", &UCustomWrestlerSubsystems::execReset },
			{ "SetEditPaintListTableOnlyEditor", &UCustomWrestlerSubsystems::execSetEditPaintListTableOnlyEditor },
			{ "SetEditPartsListTableOnlyEditor", &UCustomWrestlerSubsystems::execSetEditPartsListTableOnlyEditor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCustomWrestlerSubsystems_FindFaceType_Statics
	{
		struct CustomWrestlerSubsystems_eventFindFaceType_Parms
		{
			int32 PartsID;
			EFaceType ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartsID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PartsID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerSubsystems_FindFaceType_Statics::NewProp_PartsID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomWrestlerSubsystems_FindFaceType_Statics::NewProp_PartsID = { "PartsID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerSubsystems_eventFindFaceType_Parms, PartsID), METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerSubsystems_FindFaceType_Statics::NewProp_PartsID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerSubsystems_FindFaceType_Statics::NewProp_PartsID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerSubsystems_FindFaceType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerSubsystems_FindFaceType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerSubsystems_eventFindFaceType_Parms, ReturnValue), Z_Construct_UEnum_Creation_EFaceType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerSubsystems_FindFaceType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerSubsystems_FindFaceType_Statics::NewProp_PartsID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerSubsystems_FindFaceType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerSubsystems_FindFaceType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerSubsystems_FindFaceType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerSubsystems.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerSubsystems_FindFaceType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerSubsystems, nullptr, "FindFaceType", nullptr, nullptr, sizeof(CustomWrestlerSubsystems_eventFindFaceType_Parms), Z_Construct_UFunction_UCustomWrestlerSubsystems_FindFaceType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerSubsystems_FindFaceType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerSubsystems_FindFaceType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerSubsystems_FindFaceType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerSubsystems_FindFaceType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerSubsystems_FindFaceType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerSubsystems_GetCustomPaintList_Statics
	{
		struct CustomWrestlerSubsystems_eventGetCustomPaintList_Parms
		{
			TArray<FEditPaint> OutList;
			EGender Gender;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutList;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Gender_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gender_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Gender;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomWrestlerSubsystems_GetCustomPaintList_Statics::NewProp_OutList_Inner = { "OutList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEditPaint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCustomWrestlerSubsystems_GetCustomPaintList_Statics::NewProp_OutList = { "OutList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerSubsystems_eventGetCustomPaintList_Parms, OutList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerSubsystems_GetCustomPaintList_Statics::NewProp_Gender_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerSubsystems_GetCustomPaintList_Statics::NewProp_Gender_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerSubsystems_GetCustomPaintList_Statics::NewProp_Gender = { "Gender", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerSubsystems_eventGetCustomPaintList_Parms, Gender), Z_Construct_UEnum_ELITE_Core_EGender, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerSubsystems_GetCustomPaintList_Statics::NewProp_Gender_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerSubsystems_GetCustomPaintList_Statics::NewProp_Gender_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerSubsystems_GetCustomPaintList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerSubsystems_GetCustomPaintList_Statics::NewProp_OutList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerSubsystems_GetCustomPaintList_Statics::NewProp_OutList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerSubsystems_GetCustomPaintList_Statics::NewProp_Gender_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerSubsystems_GetCustomPaintList_Statics::NewProp_Gender,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerSubsystems_GetCustomPaintList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerSubsystems.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerSubsystems_GetCustomPaintList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerSubsystems, nullptr, "GetCustomPaintList", nullptr, nullptr, sizeof(CustomWrestlerSubsystems_eventGetCustomPaintList_Parms), Z_Construct_UFunction_UCustomWrestlerSubsystems_GetCustomPaintList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerSubsystems_GetCustomPaintList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerSubsystems_GetCustomPaintList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerSubsystems_GetCustomPaintList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerSubsystems_GetCustomPaintList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerSubsystems_GetCustomPaintList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerSubsystems_GetCustomPartsList_Statics
	{
		struct CustomWrestlerSubsystems_eventGetCustomPartsList_Parms
		{
			TArray<FEditParts> OutList;
			EGender Gender;
			EFaceType FaceType;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutList;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Gender_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gender_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Gender;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FaceType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FaceType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FaceType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomWrestlerSubsystems_GetCustomPartsList_Statics::NewProp_OutList_Inner = { "OutList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEditParts, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCustomWrestlerSubsystems_GetCustomPartsList_Statics::NewProp_OutList = { "OutList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerSubsystems_eventGetCustomPartsList_Parms, OutList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerSubsystems_GetCustomPartsList_Statics::NewProp_Gender_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerSubsystems_GetCustomPartsList_Statics::NewProp_Gender_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerSubsystems_GetCustomPartsList_Statics::NewProp_Gender = { "Gender", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerSubsystems_eventGetCustomPartsList_Parms, Gender), Z_Construct_UEnum_ELITE_Core_EGender, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerSubsystems_GetCustomPartsList_Statics::NewProp_Gender_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerSubsystems_GetCustomPartsList_Statics::NewProp_Gender_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerSubsystems_GetCustomPartsList_Statics::NewProp_FaceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerSubsystems_GetCustomPartsList_Statics::NewProp_FaceType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerSubsystems_GetCustomPartsList_Statics::NewProp_FaceType = { "FaceType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerSubsystems_eventGetCustomPartsList_Parms, FaceType), Z_Construct_UEnum_Creation_EFaceType, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerSubsystems_GetCustomPartsList_Statics::NewProp_FaceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerSubsystems_GetCustomPartsList_Statics::NewProp_FaceType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerSubsystems_GetCustomPartsList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerSubsystems_GetCustomPartsList_Statics::NewProp_OutList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerSubsystems_GetCustomPartsList_Statics::NewProp_OutList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerSubsystems_GetCustomPartsList_Statics::NewProp_Gender_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerSubsystems_GetCustomPartsList_Statics::NewProp_Gender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerSubsystems_GetCustomPartsList_Statics::NewProp_FaceType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerSubsystems_GetCustomPartsList_Statics::NewProp_FaceType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerSubsystems_GetCustomPartsList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerSubsystems.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerSubsystems_GetCustomPartsList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerSubsystems, nullptr, "GetCustomPartsList", nullptr, nullptr, sizeof(CustomWrestlerSubsystems_eventGetCustomPartsList_Parms), Z_Construct_UFunction_UCustomWrestlerSubsystems_GetCustomPartsList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerSubsystems_GetCustomPartsList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerSubsystems_GetCustomPartsList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerSubsystems_GetCustomPartsList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerSubsystems_GetCustomPartsList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerSubsystems_GetCustomPartsList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerSubsystems_GetPaintAsset_Statics
	{
		struct CustomWrestlerSubsystems_eventGetPaintAsset_Parms
		{
			int32 PaintID;
			TSoftObjectPtr<UEditWrestlerPaintAsset> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaintID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PaintID;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerSubsystems_GetPaintAsset_Statics::NewProp_PaintID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomWrestlerSubsystems_GetPaintAsset_Statics::NewProp_PaintID = { "PaintID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerSubsystems_eventGetPaintAsset_Parms, PaintID), METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerSubsystems_GetPaintAsset_Statics::NewProp_PaintID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerSubsystems_GetPaintAsset_Statics::NewProp_PaintID_MetaData)) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UCustomWrestlerSubsystems_GetPaintAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerSubsystems_eventGetPaintAsset_Parms, ReturnValue), Z_Construct_UClass_UEditWrestlerPaintAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerSubsystems_GetPaintAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerSubsystems_GetPaintAsset_Statics::NewProp_PaintID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerSubsystems_GetPaintAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerSubsystems_GetPaintAsset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerSubsystems.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerSubsystems_GetPaintAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerSubsystems, nullptr, "GetPaintAsset", nullptr, nullptr, sizeof(CustomWrestlerSubsystems_eventGetPaintAsset_Parms), Z_Construct_UFunction_UCustomWrestlerSubsystems_GetPaintAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerSubsystems_GetPaintAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerSubsystems_GetPaintAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerSubsystems_GetPaintAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerSubsystems_GetPaintAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerSubsystems_GetPaintAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerSubsystems_GetPartsAsset_Statics
	{
		struct CustomWrestlerSubsystems_eventGetPartsAsset_Parms
		{
			int32 PartsID;
			TSoftObjectPtr<UEditWrestlerPartsAsset> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartsID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PartsID;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerSubsystems_GetPartsAsset_Statics::NewProp_PartsID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomWrestlerSubsystems_GetPartsAsset_Statics::NewProp_PartsID = { "PartsID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerSubsystems_eventGetPartsAsset_Parms, PartsID), METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerSubsystems_GetPartsAsset_Statics::NewProp_PartsID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerSubsystems_GetPartsAsset_Statics::NewProp_PartsID_MetaData)) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UCustomWrestlerSubsystems_GetPartsAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerSubsystems_eventGetPartsAsset_Parms, ReturnValue), Z_Construct_UClass_UEditWrestlerPartsAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerSubsystems_GetPartsAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerSubsystems_GetPartsAsset_Statics::NewProp_PartsID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerSubsystems_GetPartsAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerSubsystems_GetPartsAsset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerSubsystems.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerSubsystems_GetPartsAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerSubsystems, nullptr, "GetPartsAsset", nullptr, nullptr, sizeof(CustomWrestlerSubsystems_eventGetPartsAsset_Parms), Z_Construct_UFunction_UCustomWrestlerSubsystems_GetPartsAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerSubsystems_GetPartsAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerSubsystems_GetPartsAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerSubsystems_GetPartsAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerSubsystems_GetPartsAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerSubsystems_GetPartsAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerSubsystems_Reset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerSubsystems_Reset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerSubsystems.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerSubsystems_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerSubsystems, nullptr, "Reset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerSubsystems_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerSubsystems_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerSubsystems_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerSubsystems_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerSubsystems_SetEditPaintListTableOnlyEditor_Statics
	{
		struct CustomWrestlerSubsystems_eventSetEditPaintListTableOnlyEditor_Parms
		{
			UDataTable* DataTable;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DataTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomWrestlerSubsystems_SetEditPaintListTableOnlyEditor_Statics::NewProp_DataTable = { "DataTable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerSubsystems_eventSetEditPaintListTableOnlyEditor_Parms, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerSubsystems_SetEditPaintListTableOnlyEditor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerSubsystems_SetEditPaintListTableOnlyEditor_Statics::NewProp_DataTable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerSubsystems_SetEditPaintListTableOnlyEditor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerSubsystems.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerSubsystems_SetEditPaintListTableOnlyEditor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerSubsystems, nullptr, "SetEditPaintListTableOnlyEditor", nullptr, nullptr, sizeof(CustomWrestlerSubsystems_eventSetEditPaintListTableOnlyEditor_Parms), Z_Construct_UFunction_UCustomWrestlerSubsystems_SetEditPaintListTableOnlyEditor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerSubsystems_SetEditPaintListTableOnlyEditor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerSubsystems_SetEditPaintListTableOnlyEditor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerSubsystems_SetEditPaintListTableOnlyEditor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerSubsystems_SetEditPaintListTableOnlyEditor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerSubsystems_SetEditPaintListTableOnlyEditor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerSubsystems_SetEditPartsListTableOnlyEditor_Statics
	{
		struct CustomWrestlerSubsystems_eventSetEditPartsListTableOnlyEditor_Parms
		{
			UDataTable* DataTable;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DataTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomWrestlerSubsystems_SetEditPartsListTableOnlyEditor_Statics::NewProp_DataTable = { "DataTable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerSubsystems_eventSetEditPartsListTableOnlyEditor_Parms, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerSubsystems_SetEditPartsListTableOnlyEditor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerSubsystems_SetEditPartsListTableOnlyEditor_Statics::NewProp_DataTable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerSubsystems_SetEditPartsListTableOnlyEditor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerSubsystems.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerSubsystems_SetEditPartsListTableOnlyEditor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerSubsystems, nullptr, "SetEditPartsListTableOnlyEditor", nullptr, nullptr, sizeof(CustomWrestlerSubsystems_eventSetEditPartsListTableOnlyEditor_Parms), Z_Construct_UFunction_UCustomWrestlerSubsystems_SetEditPartsListTableOnlyEditor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerSubsystems_SetEditPartsListTableOnlyEditor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerSubsystems_SetEditPartsListTableOnlyEditor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerSubsystems_SetEditPartsListTableOnlyEditor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerSubsystems_SetEditPartsListTableOnlyEditor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerSubsystems_SetEditPartsListTableOnlyEditor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCustomWrestlerSubsystems_NoRegister()
	{
		return UCustomWrestlerSubsystems::StaticClass();
	}
	struct Z_Construct_UClass_UCustomWrestlerSubsystems_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomWrestlerSubsystems_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCustomWrestlerSubsystems_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomWrestlerSubsystems_FindFaceType, "FindFaceType" }, // 850740181
		{ &Z_Construct_UFunction_UCustomWrestlerSubsystems_GetCustomPaintList, "GetCustomPaintList" }, // 1528337113
		{ &Z_Construct_UFunction_UCustomWrestlerSubsystems_GetCustomPartsList, "GetCustomPartsList" }, // 665776548
		{ &Z_Construct_UFunction_UCustomWrestlerSubsystems_GetPaintAsset, "GetPaintAsset" }, // 787111240
		{ &Z_Construct_UFunction_UCustomWrestlerSubsystems_GetPartsAsset, "GetPartsAsset" }, // 2948435505
		{ &Z_Construct_UFunction_UCustomWrestlerSubsystems_Reset, "Reset" }, // 822387227
		{ &Z_Construct_UFunction_UCustomWrestlerSubsystems_SetEditPaintListTableOnlyEditor, "SetEditPaintListTableOnlyEditor" }, // 3941563511
		{ &Z_Construct_UFunction_UCustomWrestlerSubsystems_SetEditPartsListTableOnlyEditor, "SetEditPartsListTableOnlyEditor" }, // 179504362
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomWrestlerSubsystems_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CustomWrestlerSubsystems.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CustomWrestlerSubsystems.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomWrestlerSubsystems_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomWrestlerSubsystems>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCustomWrestlerSubsystems_Statics::ClassParams = {
		&UCustomWrestlerSubsystems::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCustomWrestlerSubsystems_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomWrestlerSubsystems_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomWrestlerSubsystems()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCustomWrestlerSubsystems_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCustomWrestlerSubsystems, 2685831263);
	template<> CREATION_API UClass* StaticClass<UCustomWrestlerSubsystems>()
	{
		return UCustomWrestlerSubsystems::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCustomWrestlerSubsystems(Z_Construct_UClass_UCustomWrestlerSubsystems, &UCustomWrestlerSubsystems::StaticClass, TEXT("/Script/Creation"), TEXT("UCustomWrestlerSubsystems"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomWrestlerSubsystems);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
