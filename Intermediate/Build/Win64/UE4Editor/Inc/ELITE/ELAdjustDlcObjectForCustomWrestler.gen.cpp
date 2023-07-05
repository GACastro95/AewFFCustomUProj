// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/ELAdjustDlcObjectForCustomWrestler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELAdjustDlcObjectForCustomWrestler() {}
// Cross Module References
	ELITE_API UClass* Z_Construct_UClass_UELAdjustDlcObjectForCustomWrestler_NoRegister();
	ELITE_API UClass* Z_Construct_UClass_UELAdjustDlcObjectForCustomWrestler();
	ELITE_API UClass* Z_Construct_UClass_UELAdjustDlcSaveDataAccessObjectBase();
	UPackage* Z_Construct_UPackage__Script_ELITE();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FUnavailableDlcData();
	ABP_200508_API UClass* Z_Construct_UClass_UMyWrestlerDataObject_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UTemplateScoutAsset_NoRegister();
	ELITE_API UClass* Z_Construct_UClass_UELMovesAdjust_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELAdjustDlcObjectForCustomWrestler::execInitCheckList)
	{
		P_GET_STRUCT_REF(FUnavailableDlcData,Z_Param_Out_UnavailableDlcData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitCheckList_Implementation(Z_Param_Out_UnavailableDlcData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELAdjustDlcObjectForCustomWrestler::execOnCheckRoster)
	{
		P_GET_OBJECT(UMyWrestlerDataObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCheckRoster_Implementation(Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELAdjustDlcObjectForCustomWrestler::execOnCheckScout)
	{
		P_GET_OBJECT(UMyWrestlerDataObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCheckScout_Implementation(Z_Param_Object);
		P_NATIVE_END;
	}
	static FName NAME_UELAdjustDlcObjectForCustomWrestler_InitCheckList = FName(TEXT("InitCheckList"));
	void UELAdjustDlcObjectForCustomWrestler::InitCheckList(FUnavailableDlcData const& UnavailableDlcData)
	{
		ELAdjustDlcObjectForCustomWrestler_eventInitCheckList_Parms Parms;
		Parms.UnavailableDlcData=UnavailableDlcData;
		ProcessEvent(FindFunctionChecked(NAME_UELAdjustDlcObjectForCustomWrestler_InitCheckList),&Parms);
	}
	static FName NAME_UELAdjustDlcObjectForCustomWrestler_OnCheckRoster = FName(TEXT("OnCheckRoster"));
	void UELAdjustDlcObjectForCustomWrestler::OnCheckRoster(UMyWrestlerDataObject* Object)
	{
		ELAdjustDlcObjectForCustomWrestler_eventOnCheckRoster_Parms Parms;
		Parms.Object=Object;
		ProcessEvent(FindFunctionChecked(NAME_UELAdjustDlcObjectForCustomWrestler_OnCheckRoster),&Parms);
	}
	static FName NAME_UELAdjustDlcObjectForCustomWrestler_OnCheckScout = FName(TEXT("OnCheckScout"));
	void UELAdjustDlcObjectForCustomWrestler::OnCheckScout(UMyWrestlerDataObject* Object)
	{
		ELAdjustDlcObjectForCustomWrestler_eventOnCheckScout_Parms Parms;
		Parms.Object=Object;
		ProcessEvent(FindFunctionChecked(NAME_UELAdjustDlcObjectForCustomWrestler_OnCheckScout),&Parms);
	}
	void UELAdjustDlcObjectForCustomWrestler::StaticRegisterNativesUELAdjustDlcObjectForCustomWrestler()
	{
		UClass* Class = UELAdjustDlcObjectForCustomWrestler::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitCheckList", &UELAdjustDlcObjectForCustomWrestler::execInitCheckList },
			{ "OnCheckRoster", &UELAdjustDlcObjectForCustomWrestler::execOnCheckRoster },
			{ "OnCheckScout", &UELAdjustDlcObjectForCustomWrestler::execOnCheckScout },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELAdjustDlcObjectForCustomWrestler_InitCheckList_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnavailableDlcData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UnavailableDlcData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAdjustDlcObjectForCustomWrestler_InitCheckList_Statics::NewProp_UnavailableDlcData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELAdjustDlcObjectForCustomWrestler_InitCheckList_Statics::NewProp_UnavailableDlcData = { "UnavailableDlcData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAdjustDlcObjectForCustomWrestler_eventInitCheckList_Parms, UnavailableDlcData), Z_Construct_UScriptStruct_FUnavailableDlcData, METADATA_PARAMS(Z_Construct_UFunction_UELAdjustDlcObjectForCustomWrestler_InitCheckList_Statics::NewProp_UnavailableDlcData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAdjustDlcObjectForCustomWrestler_InitCheckList_Statics::NewProp_UnavailableDlcData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELAdjustDlcObjectForCustomWrestler_InitCheckList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAdjustDlcObjectForCustomWrestler_InitCheckList_Statics::NewProp_UnavailableDlcData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAdjustDlcObjectForCustomWrestler_InitCheckList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAdjustDlcObjectForCustomWrestler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAdjustDlcObjectForCustomWrestler_InitCheckList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAdjustDlcObjectForCustomWrestler, nullptr, "InitCheckList", nullptr, nullptr, sizeof(ELAdjustDlcObjectForCustomWrestler_eventInitCheckList_Parms), Z_Construct_UFunction_UELAdjustDlcObjectForCustomWrestler_InitCheckList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAdjustDlcObjectForCustomWrestler_InitCheckList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAdjustDlcObjectForCustomWrestler_InitCheckList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAdjustDlcObjectForCustomWrestler_InitCheckList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAdjustDlcObjectForCustomWrestler_InitCheckList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAdjustDlcObjectForCustomWrestler_InitCheckList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELAdjustDlcObjectForCustomWrestler_OnCheckRoster_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELAdjustDlcObjectForCustomWrestler_OnCheckRoster_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAdjustDlcObjectForCustomWrestler_eventOnCheckRoster_Parms, Object), Z_Construct_UClass_UMyWrestlerDataObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELAdjustDlcObjectForCustomWrestler_OnCheckRoster_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAdjustDlcObjectForCustomWrestler_OnCheckRoster_Statics::NewProp_Object,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAdjustDlcObjectForCustomWrestler_OnCheckRoster_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAdjustDlcObjectForCustomWrestler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAdjustDlcObjectForCustomWrestler_OnCheckRoster_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAdjustDlcObjectForCustomWrestler, nullptr, "OnCheckRoster", nullptr, nullptr, sizeof(ELAdjustDlcObjectForCustomWrestler_eventOnCheckRoster_Parms), Z_Construct_UFunction_UELAdjustDlcObjectForCustomWrestler_OnCheckRoster_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAdjustDlcObjectForCustomWrestler_OnCheckRoster_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAdjustDlcObjectForCustomWrestler_OnCheckRoster_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAdjustDlcObjectForCustomWrestler_OnCheckRoster_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAdjustDlcObjectForCustomWrestler_OnCheckRoster()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAdjustDlcObjectForCustomWrestler_OnCheckRoster_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELAdjustDlcObjectForCustomWrestler_OnCheckScout_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELAdjustDlcObjectForCustomWrestler_OnCheckScout_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAdjustDlcObjectForCustomWrestler_eventOnCheckScout_Parms, Object), Z_Construct_UClass_UMyWrestlerDataObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELAdjustDlcObjectForCustomWrestler_OnCheckScout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAdjustDlcObjectForCustomWrestler_OnCheckScout_Statics::NewProp_Object,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAdjustDlcObjectForCustomWrestler_OnCheckScout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAdjustDlcObjectForCustomWrestler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAdjustDlcObjectForCustomWrestler_OnCheckScout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAdjustDlcObjectForCustomWrestler, nullptr, "OnCheckScout", nullptr, nullptr, sizeof(ELAdjustDlcObjectForCustomWrestler_eventOnCheckScout_Parms), Z_Construct_UFunction_UELAdjustDlcObjectForCustomWrestler_OnCheckScout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAdjustDlcObjectForCustomWrestler_OnCheckScout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAdjustDlcObjectForCustomWrestler_OnCheckScout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAdjustDlcObjectForCustomWrestler_OnCheckScout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAdjustDlcObjectForCustomWrestler_OnCheckScout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAdjustDlcObjectForCustomWrestler_OnCheckScout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELAdjustDlcObjectForCustomWrestler_NoRegister()
	{
		return UELAdjustDlcObjectForCustomWrestler::StaticClass();
	}
	struct Z_Construct_UClass_UELAdjustDlcObjectForCustomWrestler_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Template_M01_Asset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Template_M01_Asset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Template_F01_Asset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Template_F01_Asset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Template_M01_Object_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Template_M01_Object;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Template_F01_Object_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Template_F01_Object;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovesAdjust_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovesAdjust;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELAdjustDlcObjectForCustomWrestler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELAdjustDlcSaveDataAccessObjectBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELAdjustDlcObjectForCustomWrestler_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELAdjustDlcObjectForCustomWrestler_InitCheckList, "InitCheckList" }, // 3795153630
		{ &Z_Construct_UFunction_UELAdjustDlcObjectForCustomWrestler_OnCheckRoster, "OnCheckRoster" }, // 4292834008
		{ &Z_Construct_UFunction_UELAdjustDlcObjectForCustomWrestler_OnCheckScout, "OnCheckScout" }, // 2232188811
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAdjustDlcObjectForCustomWrestler_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELAdjustDlcObjectForCustomWrestler.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELAdjustDlcObjectForCustomWrestler.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAdjustDlcObjectForCustomWrestler_Statics::NewProp_Template_M01_Asset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAdjustDlcObjectForCustomWrestler" },
		{ "ModuleRelativePath", "Public/ELAdjustDlcObjectForCustomWrestler.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UELAdjustDlcObjectForCustomWrestler_Statics::NewProp_Template_M01_Asset = { "Template_M01_Asset", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELAdjustDlcObjectForCustomWrestler, Template_M01_Asset), Z_Construct_UClass_UTemplateScoutAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELAdjustDlcObjectForCustomWrestler_Statics::NewProp_Template_M01_Asset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELAdjustDlcObjectForCustomWrestler_Statics::NewProp_Template_M01_Asset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAdjustDlcObjectForCustomWrestler_Statics::NewProp_Template_F01_Asset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAdjustDlcObjectForCustomWrestler" },
		{ "ModuleRelativePath", "Public/ELAdjustDlcObjectForCustomWrestler.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UELAdjustDlcObjectForCustomWrestler_Statics::NewProp_Template_F01_Asset = { "Template_F01_Asset", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELAdjustDlcObjectForCustomWrestler, Template_F01_Asset), Z_Construct_UClass_UTemplateScoutAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELAdjustDlcObjectForCustomWrestler_Statics::NewProp_Template_F01_Asset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELAdjustDlcObjectForCustomWrestler_Statics::NewProp_Template_F01_Asset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAdjustDlcObjectForCustomWrestler_Statics::NewProp_Template_M01_Object_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAdjustDlcObjectForCustomWrestler" },
		{ "ModuleRelativePath", "Public/ELAdjustDlcObjectForCustomWrestler.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELAdjustDlcObjectForCustomWrestler_Statics::NewProp_Template_M01_Object = { "Template_M01_Object", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELAdjustDlcObjectForCustomWrestler, Template_M01_Object), Z_Construct_UClass_UTemplateScoutAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELAdjustDlcObjectForCustomWrestler_Statics::NewProp_Template_M01_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELAdjustDlcObjectForCustomWrestler_Statics::NewProp_Template_M01_Object_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAdjustDlcObjectForCustomWrestler_Statics::NewProp_Template_F01_Object_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAdjustDlcObjectForCustomWrestler" },
		{ "ModuleRelativePath", "Public/ELAdjustDlcObjectForCustomWrestler.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELAdjustDlcObjectForCustomWrestler_Statics::NewProp_Template_F01_Object = { "Template_F01_Object", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELAdjustDlcObjectForCustomWrestler, Template_F01_Object), Z_Construct_UClass_UTemplateScoutAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELAdjustDlcObjectForCustomWrestler_Statics::NewProp_Template_F01_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELAdjustDlcObjectForCustomWrestler_Statics::NewProp_Template_F01_Object_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAdjustDlcObjectForCustomWrestler_Statics::NewProp_MovesAdjust_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAdjustDlcObjectForCustomWrestler" },
		{ "ModuleRelativePath", "Public/ELAdjustDlcObjectForCustomWrestler.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELAdjustDlcObjectForCustomWrestler_Statics::NewProp_MovesAdjust = { "MovesAdjust", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELAdjustDlcObjectForCustomWrestler, MovesAdjust), Z_Construct_UClass_UELMovesAdjust_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELAdjustDlcObjectForCustomWrestler_Statics::NewProp_MovesAdjust_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELAdjustDlcObjectForCustomWrestler_Statics::NewProp_MovesAdjust_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELAdjustDlcObjectForCustomWrestler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAdjustDlcObjectForCustomWrestler_Statics::NewProp_Template_M01_Asset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAdjustDlcObjectForCustomWrestler_Statics::NewProp_Template_F01_Asset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAdjustDlcObjectForCustomWrestler_Statics::NewProp_Template_M01_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAdjustDlcObjectForCustomWrestler_Statics::NewProp_Template_F01_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAdjustDlcObjectForCustomWrestler_Statics::NewProp_MovesAdjust,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELAdjustDlcObjectForCustomWrestler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELAdjustDlcObjectForCustomWrestler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELAdjustDlcObjectForCustomWrestler_Statics::ClassParams = {
		&UELAdjustDlcObjectForCustomWrestler::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELAdjustDlcObjectForCustomWrestler_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELAdjustDlcObjectForCustomWrestler_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELAdjustDlcObjectForCustomWrestler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELAdjustDlcObjectForCustomWrestler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELAdjustDlcObjectForCustomWrestler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELAdjustDlcObjectForCustomWrestler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELAdjustDlcObjectForCustomWrestler, 2329268048);
	template<> ELITE_API UClass* StaticClass<UELAdjustDlcObjectForCustomWrestler>()
	{
		return UELAdjustDlcObjectForCustomWrestler::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELAdjustDlcObjectForCustomWrestler(Z_Construct_UClass_UELAdjustDlcObjectForCustomWrestler, &UELAdjustDlcObjectForCustomWrestler::StaticClass, TEXT("/Script/ELITE"), TEXT("UELAdjustDlcObjectForCustomWrestler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELAdjustDlcObjectForCustomWrestler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
