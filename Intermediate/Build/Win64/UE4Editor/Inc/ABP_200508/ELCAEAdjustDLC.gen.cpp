// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELCAEAdjustDLC.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCAEAdjustDLC() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELCAEAdjustDLC_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELCAEAdjustDLC();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELWrestlerProfile_CutScene();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FUnavailableDlcData();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELCAEAdjustDLC::execDeleteDLCItem)
	{
		P_GET_STRUCT_REF(FELWrestlerProfile_CutScene,Z_Param_Out_NewCutsceneProfile);
		P_GET_STRUCT_REF(FELWrestlerProfile_CutScene,Z_Param_Out_BaseCutsceneProfile);
		P_GET_STRUCT_REF(FELWrestlerProfile_CutScene,Z_Param_Out_DefaultCutsceneProfile);
		P_GET_STRUCT_REF(FUnavailableDlcData,Z_Param_Out_UnavailableDlcData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DeleteDLCItem(Z_Param_Out_NewCutsceneProfile,Z_Param_Out_BaseCutsceneProfile,Z_Param_Out_DefaultCutsceneProfile,Z_Param_Out_UnavailableDlcData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCAEAdjustDLC::execSetup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Setup();
		P_NATIVE_END;
	}
	static FName NAME_UELCAEAdjustDLC_IsDeleteDLCMovie = FName(TEXT("IsDeleteDLCMovie"));
	bool UELCAEAdjustDLC::IsDeleteDLCMovie(FELWrestlerProfile_CutScene const& BaseCutsceneProfile, FUnavailableDlcData const& UnavailableDlcData) const
	{
		ELCAEAdjustDLC_eventIsDeleteDLCMovie_Parms Parms;
		Parms.BaseCutsceneProfile=BaseCutsceneProfile;
		Parms.UnavailableDlcData=UnavailableDlcData;
		const_cast<UELCAEAdjustDLC*>(this)->ProcessEvent(FindFunctionChecked(NAME_UELCAEAdjustDLC_IsDeleteDLCMovie),&Parms);
		return !!Parms.ReturnValue;
	}
	void UELCAEAdjustDLC::StaticRegisterNativesUELCAEAdjustDLC()
	{
		UClass* Class = UELCAEAdjustDLC::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeleteDLCItem", &UELCAEAdjustDLC::execDeleteDLCItem },
			{ "Setup", &UELCAEAdjustDLC::execSetup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELCAEAdjustDLC_DeleteDLCItem_Statics
	{
		struct ELCAEAdjustDLC_eventDeleteDLCItem_Parms
		{
			FELWrestlerProfile_CutScene NewCutsceneProfile;
			FELWrestlerProfile_CutScene BaseCutsceneProfile;
			FELWrestlerProfile_CutScene DefaultCutsceneProfile;
			FUnavailableDlcData UnavailableDlcData;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewCutsceneProfile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseCutsceneProfile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BaseCutsceneProfile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultCutsceneProfile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultCutsceneProfile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnavailableDlcData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UnavailableDlcData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCAEAdjustDLC_DeleteDLCItem_Statics::NewProp_NewCutsceneProfile = { "NewCutsceneProfile", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCAEAdjustDLC_eventDeleteDLCItem_Parms, NewCutsceneProfile), Z_Construct_UScriptStruct_FELWrestlerProfile_CutScene, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCAEAdjustDLC_DeleteDLCItem_Statics::NewProp_BaseCutsceneProfile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCAEAdjustDLC_DeleteDLCItem_Statics::NewProp_BaseCutsceneProfile = { "BaseCutsceneProfile", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCAEAdjustDLC_eventDeleteDLCItem_Parms, BaseCutsceneProfile), Z_Construct_UScriptStruct_FELWrestlerProfile_CutScene, METADATA_PARAMS(Z_Construct_UFunction_UELCAEAdjustDLC_DeleteDLCItem_Statics::NewProp_BaseCutsceneProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCAEAdjustDLC_DeleteDLCItem_Statics::NewProp_BaseCutsceneProfile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCAEAdjustDLC_DeleteDLCItem_Statics::NewProp_DefaultCutsceneProfile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCAEAdjustDLC_DeleteDLCItem_Statics::NewProp_DefaultCutsceneProfile = { "DefaultCutsceneProfile", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCAEAdjustDLC_eventDeleteDLCItem_Parms, DefaultCutsceneProfile), Z_Construct_UScriptStruct_FELWrestlerProfile_CutScene, METADATA_PARAMS(Z_Construct_UFunction_UELCAEAdjustDLC_DeleteDLCItem_Statics::NewProp_DefaultCutsceneProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCAEAdjustDLC_DeleteDLCItem_Statics::NewProp_DefaultCutsceneProfile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCAEAdjustDLC_DeleteDLCItem_Statics::NewProp_UnavailableDlcData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCAEAdjustDLC_DeleteDLCItem_Statics::NewProp_UnavailableDlcData = { "UnavailableDlcData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCAEAdjustDLC_eventDeleteDLCItem_Parms, UnavailableDlcData), Z_Construct_UScriptStruct_FUnavailableDlcData, METADATA_PARAMS(Z_Construct_UFunction_UELCAEAdjustDLC_DeleteDLCItem_Statics::NewProp_UnavailableDlcData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCAEAdjustDLC_DeleteDLCItem_Statics::NewProp_UnavailableDlcData_MetaData)) };
	void Z_Construct_UFunction_UELCAEAdjustDLC_DeleteDLCItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELCAEAdjustDLC_eventDeleteDLCItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCAEAdjustDLC_DeleteDLCItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCAEAdjustDLC_eventDeleteDLCItem_Parms), &Z_Construct_UFunction_UELCAEAdjustDLC_DeleteDLCItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCAEAdjustDLC_DeleteDLCItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCAEAdjustDLC_DeleteDLCItem_Statics::NewProp_NewCutsceneProfile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCAEAdjustDLC_DeleteDLCItem_Statics::NewProp_BaseCutsceneProfile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCAEAdjustDLC_DeleteDLCItem_Statics::NewProp_DefaultCutsceneProfile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCAEAdjustDLC_DeleteDLCItem_Statics::NewProp_UnavailableDlcData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCAEAdjustDLC_DeleteDLCItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCAEAdjustDLC_DeleteDLCItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCAEAdjustDLC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCAEAdjustDLC_DeleteDLCItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCAEAdjustDLC, nullptr, "DeleteDLCItem", nullptr, nullptr, sizeof(ELCAEAdjustDLC_eventDeleteDLCItem_Parms), Z_Construct_UFunction_UELCAEAdjustDLC_DeleteDLCItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCAEAdjustDLC_DeleteDLCItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCAEAdjustDLC_DeleteDLCItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCAEAdjustDLC_DeleteDLCItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCAEAdjustDLC_DeleteDLCItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCAEAdjustDLC_DeleteDLCItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCAEAdjustDLC_IsDeleteDLCMovie_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseCutsceneProfile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BaseCutsceneProfile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnavailableDlcData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UnavailableDlcData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCAEAdjustDLC_IsDeleteDLCMovie_Statics::NewProp_BaseCutsceneProfile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCAEAdjustDLC_IsDeleteDLCMovie_Statics::NewProp_BaseCutsceneProfile = { "BaseCutsceneProfile", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCAEAdjustDLC_eventIsDeleteDLCMovie_Parms, BaseCutsceneProfile), Z_Construct_UScriptStruct_FELWrestlerProfile_CutScene, METADATA_PARAMS(Z_Construct_UFunction_UELCAEAdjustDLC_IsDeleteDLCMovie_Statics::NewProp_BaseCutsceneProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCAEAdjustDLC_IsDeleteDLCMovie_Statics::NewProp_BaseCutsceneProfile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCAEAdjustDLC_IsDeleteDLCMovie_Statics::NewProp_UnavailableDlcData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCAEAdjustDLC_IsDeleteDLCMovie_Statics::NewProp_UnavailableDlcData = { "UnavailableDlcData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCAEAdjustDLC_eventIsDeleteDLCMovie_Parms, UnavailableDlcData), Z_Construct_UScriptStruct_FUnavailableDlcData, METADATA_PARAMS(Z_Construct_UFunction_UELCAEAdjustDLC_IsDeleteDLCMovie_Statics::NewProp_UnavailableDlcData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCAEAdjustDLC_IsDeleteDLCMovie_Statics::NewProp_UnavailableDlcData_MetaData)) };
	void Z_Construct_UFunction_UELCAEAdjustDLC_IsDeleteDLCMovie_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELCAEAdjustDLC_eventIsDeleteDLCMovie_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCAEAdjustDLC_IsDeleteDLCMovie_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCAEAdjustDLC_eventIsDeleteDLCMovie_Parms), &Z_Construct_UFunction_UELCAEAdjustDLC_IsDeleteDLCMovie_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCAEAdjustDLC_IsDeleteDLCMovie_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCAEAdjustDLC_IsDeleteDLCMovie_Statics::NewProp_BaseCutsceneProfile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCAEAdjustDLC_IsDeleteDLCMovie_Statics::NewProp_UnavailableDlcData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCAEAdjustDLC_IsDeleteDLCMovie_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCAEAdjustDLC_IsDeleteDLCMovie_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCAEAdjustDLC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCAEAdjustDLC_IsDeleteDLCMovie_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCAEAdjustDLC, nullptr, "IsDeleteDLCMovie", nullptr, nullptr, sizeof(ELCAEAdjustDLC_eventIsDeleteDLCMovie_Parms), Z_Construct_UFunction_UELCAEAdjustDLC_IsDeleteDLCMovie_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCAEAdjustDLC_IsDeleteDLCMovie_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCAEAdjustDLC_IsDeleteDLCMovie_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCAEAdjustDLC_IsDeleteDLCMovie_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCAEAdjustDLC_IsDeleteDLCMovie()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCAEAdjustDLC_IsDeleteDLCMovie_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCAEAdjustDLC_Setup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCAEAdjustDLC_Setup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCAEAdjustDLC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCAEAdjustDLC_Setup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCAEAdjustDLC, nullptr, "Setup", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCAEAdjustDLC_Setup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCAEAdjustDLC_Setup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCAEAdjustDLC_Setup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCAEAdjustDLC_Setup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELCAEAdjustDLC_NoRegister()
	{
		return UELCAEAdjustDLC::StaticClass();
	}
	struct Z_Construct_UClass_UELCAEAdjustDLC_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_AnimationDataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ParticleDataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BGModelDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_BGModelDataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FingerSignDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_FingerSignDataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenFilterDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ScreenFilterDataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MusicDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_MusicDataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovieDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_MovieDataTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELCAEAdjustDLC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELCAEAdjustDLC_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELCAEAdjustDLC_DeleteDLCItem, "DeleteDLCItem" }, // 2830293241
		{ &Z_Construct_UFunction_UELCAEAdjustDLC_IsDeleteDLCMovie, "IsDeleteDLCMovie" }, // 11189130
		{ &Z_Construct_UFunction_UELCAEAdjustDLC_Setup, "Setup" }, // 3874885076
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCAEAdjustDLC_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELCAEAdjustDLC.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCAEAdjustDLC.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCAEAdjustDLC_Statics::NewProp_AnimationDataTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCAEAdjustDLC" },
		{ "ModuleRelativePath", "Public/ELCAEAdjustDLC.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UELCAEAdjustDLC_Statics::NewProp_AnimationDataTable = { "AnimationDataTable", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCAEAdjustDLC, AnimationDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELCAEAdjustDLC_Statics::NewProp_AnimationDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCAEAdjustDLC_Statics::NewProp_AnimationDataTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCAEAdjustDLC_Statics::NewProp_ParticleDataTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCAEAdjustDLC" },
		{ "ModuleRelativePath", "Public/ELCAEAdjustDLC.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UELCAEAdjustDLC_Statics::NewProp_ParticleDataTable = { "ParticleDataTable", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCAEAdjustDLC, ParticleDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELCAEAdjustDLC_Statics::NewProp_ParticleDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCAEAdjustDLC_Statics::NewProp_ParticleDataTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCAEAdjustDLC_Statics::NewProp_BGModelDataTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCAEAdjustDLC" },
		{ "ModuleRelativePath", "Public/ELCAEAdjustDLC.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UELCAEAdjustDLC_Statics::NewProp_BGModelDataTable = { "BGModelDataTable", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCAEAdjustDLC, BGModelDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELCAEAdjustDLC_Statics::NewProp_BGModelDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCAEAdjustDLC_Statics::NewProp_BGModelDataTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCAEAdjustDLC_Statics::NewProp_FingerSignDataTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCAEAdjustDLC" },
		{ "ModuleRelativePath", "Public/ELCAEAdjustDLC.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UELCAEAdjustDLC_Statics::NewProp_FingerSignDataTable = { "FingerSignDataTable", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCAEAdjustDLC, FingerSignDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELCAEAdjustDLC_Statics::NewProp_FingerSignDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCAEAdjustDLC_Statics::NewProp_FingerSignDataTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCAEAdjustDLC_Statics::NewProp_ScreenFilterDataTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCAEAdjustDLC" },
		{ "ModuleRelativePath", "Public/ELCAEAdjustDLC.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UELCAEAdjustDLC_Statics::NewProp_ScreenFilterDataTable = { "ScreenFilterDataTable", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCAEAdjustDLC, ScreenFilterDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELCAEAdjustDLC_Statics::NewProp_ScreenFilterDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCAEAdjustDLC_Statics::NewProp_ScreenFilterDataTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCAEAdjustDLC_Statics::NewProp_MusicDataTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCAEAdjustDLC" },
		{ "ModuleRelativePath", "Public/ELCAEAdjustDLC.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UELCAEAdjustDLC_Statics::NewProp_MusicDataTable = { "MusicDataTable", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCAEAdjustDLC, MusicDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELCAEAdjustDLC_Statics::NewProp_MusicDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCAEAdjustDLC_Statics::NewProp_MusicDataTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCAEAdjustDLC_Statics::NewProp_MovieDataTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCAEAdjustDLC" },
		{ "ModuleRelativePath", "Public/ELCAEAdjustDLC.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UELCAEAdjustDLC_Statics::NewProp_MovieDataTable = { "MovieDataTable", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCAEAdjustDLC, MovieDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELCAEAdjustDLC_Statics::NewProp_MovieDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCAEAdjustDLC_Statics::NewProp_MovieDataTable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELCAEAdjustDLC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCAEAdjustDLC_Statics::NewProp_AnimationDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCAEAdjustDLC_Statics::NewProp_ParticleDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCAEAdjustDLC_Statics::NewProp_BGModelDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCAEAdjustDLC_Statics::NewProp_FingerSignDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCAEAdjustDLC_Statics::NewProp_ScreenFilterDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCAEAdjustDLC_Statics::NewProp_MusicDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCAEAdjustDLC_Statics::NewProp_MovieDataTable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELCAEAdjustDLC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELCAEAdjustDLC>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELCAEAdjustDLC_Statics::ClassParams = {
		&UELCAEAdjustDLC::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELCAEAdjustDLC_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELCAEAdjustDLC_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELCAEAdjustDLC_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELCAEAdjustDLC_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELCAEAdjustDLC()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELCAEAdjustDLC_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELCAEAdjustDLC, 2158029839);
	template<> ABP_200508_API UClass* StaticClass<UELCAEAdjustDLC>()
	{
		return UELCAEAdjustDLC::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELCAEAdjustDLC(Z_Construct_UClass_UELCAEAdjustDLC, &UELCAEAdjustDLC::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELCAEAdjustDLC"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELCAEAdjustDLC);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
