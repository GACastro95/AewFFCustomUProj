// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/CreationSettingsUtilityFunctions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCreationSettingsUtilityFunctions() {}
// Cross Module References
	CREATION_API UClass* Z_Construct_UClass_UCreationSettingsUtilityFunctions_NoRegister();
	CREATION_API UClass* Z_Construct_UClass_UCreationSettingsUtilityFunctions();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Creation();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	CREATION_API UClass* Z_Construct_UClass_UCreationSettings_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCreationSettingsUtilityFunctions::execGetBodyTypeTable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDataTable**)Z_Param__Result=UCreationSettingsUtilityFunctions::GetBodyTypeTable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCreationSettingsUtilityFunctions::execGetColorGroupTable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDataTable**)Z_Param__Result=UCreationSettingsUtilityFunctions::GetColorGroupTable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCreationSettingsUtilityFunctions::execGetCreationGameSetting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCreationSettings**)Z_Param__Result=UCreationSettingsUtilityFunctions::GetCreationGameSetting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCreationSettingsUtilityFunctions::execGetEditPaintListTable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDataTable**)Z_Param__Result=UCreationSettingsUtilityFunctions::GetEditPaintListTable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCreationSettingsUtilityFunctions::execGetEditPartsCategoryTable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDataTable**)Z_Param__Result=UCreationSettingsUtilityFunctions::GetEditPartsCategoryTable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCreationSettingsUtilityFunctions::execGetEditPartsListTable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDataTable**)Z_Param__Result=UCreationSettingsUtilityFunctions::GetEditPartsListTable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCreationSettingsUtilityFunctions::execGetFaceTypeTable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDataTable**)Z_Param__Result=UCreationSettingsUtilityFunctions::GetFaceTypeTable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCreationSettingsUtilityFunctions::execGetIndexedColorTable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDataTable**)Z_Param__Result=UCreationSettingsUtilityFunctions::GetIndexedColorTable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCreationSettingsUtilityFunctions::execGetVoiceTypeTable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDataTable**)Z_Param__Result=UCreationSettingsUtilityFunctions::GetVoiceTypeTable();
		P_NATIVE_END;
	}
	void UCreationSettingsUtilityFunctions::StaticRegisterNativesUCreationSettingsUtilityFunctions()
	{
		UClass* Class = UCreationSettingsUtilityFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBodyTypeTable", &UCreationSettingsUtilityFunctions::execGetBodyTypeTable },
			{ "GetColorGroupTable", &UCreationSettingsUtilityFunctions::execGetColorGroupTable },
			{ "GetCreationGameSetting", &UCreationSettingsUtilityFunctions::execGetCreationGameSetting },
			{ "GetEditPaintListTable", &UCreationSettingsUtilityFunctions::execGetEditPaintListTable },
			{ "GetEditPartsCategoryTable", &UCreationSettingsUtilityFunctions::execGetEditPartsCategoryTable },
			{ "GetEditPartsListTable", &UCreationSettingsUtilityFunctions::execGetEditPartsListTable },
			{ "GetFaceTypeTable", &UCreationSettingsUtilityFunctions::execGetFaceTypeTable },
			{ "GetIndexedColorTable", &UCreationSettingsUtilityFunctions::execGetIndexedColorTable },
			{ "GetVoiceTypeTable", &UCreationSettingsUtilityFunctions::execGetVoiceTypeTable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetBodyTypeTable_Statics
	{
		struct CreationSettingsUtilityFunctions_eventGetBodyTypeTable_Parms
		{
			UDataTable* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetBodyTypeTable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CreationSettingsUtilityFunctions_eventGetBodyTypeTable_Parms, ReturnValue), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetBodyTypeTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetBodyTypeTable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetBodyTypeTable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CreationSettingsUtilityFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetBodyTypeTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCreationSettingsUtilityFunctions, nullptr, "GetBodyTypeTable", nullptr, nullptr, sizeof(CreationSettingsUtilityFunctions_eventGetBodyTypeTable_Parms), Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetBodyTypeTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetBodyTypeTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetBodyTypeTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetBodyTypeTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetBodyTypeTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetBodyTypeTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetColorGroupTable_Statics
	{
		struct CreationSettingsUtilityFunctions_eventGetColorGroupTable_Parms
		{
			UDataTable* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetColorGroupTable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CreationSettingsUtilityFunctions_eventGetColorGroupTable_Parms, ReturnValue), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetColorGroupTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetColorGroupTable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetColorGroupTable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CreationSettingsUtilityFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetColorGroupTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCreationSettingsUtilityFunctions, nullptr, "GetColorGroupTable", nullptr, nullptr, sizeof(CreationSettingsUtilityFunctions_eventGetColorGroupTable_Parms), Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetColorGroupTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetColorGroupTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetColorGroupTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetColorGroupTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetColorGroupTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetColorGroupTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetCreationGameSetting_Statics
	{
		struct CreationSettingsUtilityFunctions_eventGetCreationGameSetting_Parms
		{
			UCreationSettings* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetCreationGameSetting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CreationSettingsUtilityFunctions_eventGetCreationGameSetting_Parms, ReturnValue), Z_Construct_UClass_UCreationSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetCreationGameSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetCreationGameSetting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetCreationGameSetting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CreationSettingsUtilityFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetCreationGameSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCreationSettingsUtilityFunctions, nullptr, "GetCreationGameSetting", nullptr, nullptr, sizeof(CreationSettingsUtilityFunctions_eventGetCreationGameSetting_Parms), Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetCreationGameSetting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetCreationGameSetting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetCreationGameSetting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetCreationGameSetting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetCreationGameSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetCreationGameSetting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetEditPaintListTable_Statics
	{
		struct CreationSettingsUtilityFunctions_eventGetEditPaintListTable_Parms
		{
			UDataTable* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetEditPaintListTable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CreationSettingsUtilityFunctions_eventGetEditPaintListTable_Parms, ReturnValue), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetEditPaintListTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetEditPaintListTable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetEditPaintListTable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CreationSettingsUtilityFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetEditPaintListTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCreationSettingsUtilityFunctions, nullptr, "GetEditPaintListTable", nullptr, nullptr, sizeof(CreationSettingsUtilityFunctions_eventGetEditPaintListTable_Parms), Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetEditPaintListTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetEditPaintListTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetEditPaintListTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetEditPaintListTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetEditPaintListTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetEditPaintListTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetEditPartsCategoryTable_Statics
	{
		struct CreationSettingsUtilityFunctions_eventGetEditPartsCategoryTable_Parms
		{
			UDataTable* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetEditPartsCategoryTable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CreationSettingsUtilityFunctions_eventGetEditPartsCategoryTable_Parms, ReturnValue), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetEditPartsCategoryTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetEditPartsCategoryTable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetEditPartsCategoryTable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CreationSettingsUtilityFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetEditPartsCategoryTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCreationSettingsUtilityFunctions, nullptr, "GetEditPartsCategoryTable", nullptr, nullptr, sizeof(CreationSettingsUtilityFunctions_eventGetEditPartsCategoryTable_Parms), Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetEditPartsCategoryTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetEditPartsCategoryTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetEditPartsCategoryTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetEditPartsCategoryTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetEditPartsCategoryTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetEditPartsCategoryTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetEditPartsListTable_Statics
	{
		struct CreationSettingsUtilityFunctions_eventGetEditPartsListTable_Parms
		{
			UDataTable* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetEditPartsListTable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CreationSettingsUtilityFunctions_eventGetEditPartsListTable_Parms, ReturnValue), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetEditPartsListTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetEditPartsListTable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetEditPartsListTable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CreationSettingsUtilityFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetEditPartsListTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCreationSettingsUtilityFunctions, nullptr, "GetEditPartsListTable", nullptr, nullptr, sizeof(CreationSettingsUtilityFunctions_eventGetEditPartsListTable_Parms), Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetEditPartsListTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetEditPartsListTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetEditPartsListTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetEditPartsListTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetEditPartsListTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetEditPartsListTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetFaceTypeTable_Statics
	{
		struct CreationSettingsUtilityFunctions_eventGetFaceTypeTable_Parms
		{
			UDataTable* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetFaceTypeTable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CreationSettingsUtilityFunctions_eventGetFaceTypeTable_Parms, ReturnValue), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetFaceTypeTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetFaceTypeTable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetFaceTypeTable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CreationSettingsUtilityFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetFaceTypeTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCreationSettingsUtilityFunctions, nullptr, "GetFaceTypeTable", nullptr, nullptr, sizeof(CreationSettingsUtilityFunctions_eventGetFaceTypeTable_Parms), Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetFaceTypeTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetFaceTypeTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetFaceTypeTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetFaceTypeTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetFaceTypeTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetFaceTypeTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetIndexedColorTable_Statics
	{
		struct CreationSettingsUtilityFunctions_eventGetIndexedColorTable_Parms
		{
			UDataTable* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetIndexedColorTable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CreationSettingsUtilityFunctions_eventGetIndexedColorTable_Parms, ReturnValue), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetIndexedColorTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetIndexedColorTable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetIndexedColorTable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CreationSettingsUtilityFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetIndexedColorTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCreationSettingsUtilityFunctions, nullptr, "GetIndexedColorTable", nullptr, nullptr, sizeof(CreationSettingsUtilityFunctions_eventGetIndexedColorTable_Parms), Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetIndexedColorTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetIndexedColorTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetIndexedColorTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetIndexedColorTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetIndexedColorTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetIndexedColorTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetVoiceTypeTable_Statics
	{
		struct CreationSettingsUtilityFunctions_eventGetVoiceTypeTable_Parms
		{
			UDataTable* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetVoiceTypeTable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CreationSettingsUtilityFunctions_eventGetVoiceTypeTable_Parms, ReturnValue), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetVoiceTypeTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetVoiceTypeTable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetVoiceTypeTable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CreationSettingsUtilityFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetVoiceTypeTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCreationSettingsUtilityFunctions, nullptr, "GetVoiceTypeTable", nullptr, nullptr, sizeof(CreationSettingsUtilityFunctions_eventGetVoiceTypeTable_Parms), Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetVoiceTypeTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetVoiceTypeTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetVoiceTypeTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetVoiceTypeTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetVoiceTypeTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetVoiceTypeTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCreationSettingsUtilityFunctions_NoRegister()
	{
		return UCreationSettingsUtilityFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UCreationSettingsUtilityFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCreationSettingsUtilityFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCreationSettingsUtilityFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetBodyTypeTable, "GetBodyTypeTable" }, // 340727324
		{ &Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetColorGroupTable, "GetColorGroupTable" }, // 360999999
		{ &Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetCreationGameSetting, "GetCreationGameSetting" }, // 936709127
		{ &Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetEditPaintListTable, "GetEditPaintListTable" }, // 2221865210
		{ &Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetEditPartsCategoryTable, "GetEditPartsCategoryTable" }, // 143818330
		{ &Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetEditPartsListTable, "GetEditPartsListTable" }, // 509225840
		{ &Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetFaceTypeTable, "GetFaceTypeTable" }, // 991166897
		{ &Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetIndexedColorTable, "GetIndexedColorTable" }, // 67517086
		{ &Z_Construct_UFunction_UCreationSettingsUtilityFunctions_GetVoiceTypeTable, "GetVoiceTypeTable" }, // 661182230
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreationSettingsUtilityFunctions_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CreationSettingsUtilityFunctions.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CreationSettingsUtilityFunctions.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCreationSettingsUtilityFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCreationSettingsUtilityFunctions>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCreationSettingsUtilityFunctions_Statics::ClassParams = {
		&UCreationSettingsUtilityFunctions::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCreationSettingsUtilityFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCreationSettingsUtilityFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCreationSettingsUtilityFunctions()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCreationSettingsUtilityFunctions_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCreationSettingsUtilityFunctions, 1069017374);
	template<> CREATION_API UClass* StaticClass<UCreationSettingsUtilityFunctions>()
	{
		return UCreationSettingsUtilityFunctions::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCreationSettingsUtilityFunctions(Z_Construct_UClass_UCreationSettingsUtilityFunctions, &UCreationSettingsUtilityFunctions::StaticClass, TEXT("/Script/Creation"), TEXT("UCreationSettingsUtilityFunctions"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCreationSettingsUtilityFunctions);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
