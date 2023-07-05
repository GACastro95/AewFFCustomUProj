// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/YCAM_AutoAnimPreview.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYCAM_AutoAnimPreview() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AYCAM_AutoAnimPreview_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AYCAM_AutoAnimPreview();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EAutoAnimMode();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FMovesTestMenuStructDefine();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSettingMenuIDs();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FAutoAnimInfo();
// End Cross Module References
	DEFINE_FUNCTION(AYCAM_AutoAnimPreview::execAddCategoryItemIDFromSettingMenuID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_In_SettingMenuID);
		P_GET_TARRAY_REF(int32,Z_Param_Out_Out_CategoryItemIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddCategoryItemIDFromSettingMenuID(Z_Param_In_SettingMenuID,Z_Param_Out_Out_CategoryItemIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AYCAM_AutoAnimPreview::execAddPlaySituationFromCategoryItemID)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_In_CategoryItemIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddPlaySituationFromCategoryItemID(Z_Param_Out_In_CategoryItemIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AYCAM_AutoAnimPreview::execAllTestStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AllTestStart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AYCAM_AutoAnimPreview::execDistanceTestStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DistanceTestStart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AYCAM_AutoAnimPreview::execDivingDistanceTestStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DivingDistanceTestStart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AYCAM_AutoAnimPreview::execExecuteDequeMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecuteDequeMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AYCAM_AutoAnimPreview::execInit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AYCAM_AutoAnimPreview::execPreviewStart)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_In_SettingMenuID);
		P_GET_ENUM(EAutoAnimMode,Z_Param_In_Mode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PreviewStart(Z_Param_In_SettingMenuID,EAutoAnimMode(Z_Param_In_Mode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AYCAM_AutoAnimPreview::execPreviewStartAll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PreviewStartAll();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AYCAM_AutoAnimPreview::execPreviewStartToArray)
	{
		P_GET_TARRAY(int32,Z_Param_In_SettingMenuIDs);
		P_GET_ENUM(EAutoAnimMode,Z_Param_In_Mode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PreviewStartToArray(Z_Param_In_SettingMenuIDs,EAutoAnimMode(Z_Param_In_Mode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AYCAM_AutoAnimPreview::execStopPreview)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopPreview_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AYCAM_AutoAnimPreview::execStrikeDistanceTestStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StrikeDistanceTestStart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AYCAM_AutoAnimPreview::execUninit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Uninit_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_AYCAM_AutoAnimPreview_PlayAnimations = FName(TEXT("PlayAnimations"));
	void AYCAM_AutoAnimPreview::PlayAnimations()
	{
		ProcessEvent(FindFunctionChecked(NAME_AYCAM_AutoAnimPreview_PlayAnimations),NULL);
	}
	static FName NAME_AYCAM_AutoAnimPreview_StopPreview = FName(TEXT("StopPreview"));
	void AYCAM_AutoAnimPreview::StopPreview()
	{
		ProcessEvent(FindFunctionChecked(NAME_AYCAM_AutoAnimPreview_StopPreview),NULL);
	}
	static FName NAME_AYCAM_AutoAnimPreview_Uninit = FName(TEXT("Uninit"));
	void AYCAM_AutoAnimPreview::Uninit()
	{
		ProcessEvent(FindFunctionChecked(NAME_AYCAM_AutoAnimPreview_Uninit),NULL);
	}
	void AYCAM_AutoAnimPreview::StaticRegisterNativesAYCAM_AutoAnimPreview()
	{
		UClass* Class = AYCAM_AutoAnimPreview::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddCategoryItemIDFromSettingMenuID", &AYCAM_AutoAnimPreview::execAddCategoryItemIDFromSettingMenuID },
			{ "AddPlaySituationFromCategoryItemID", &AYCAM_AutoAnimPreview::execAddPlaySituationFromCategoryItemID },
			{ "AllTestStart", &AYCAM_AutoAnimPreview::execAllTestStart },
			{ "DistanceTestStart", &AYCAM_AutoAnimPreview::execDistanceTestStart },
			{ "DivingDistanceTestStart", &AYCAM_AutoAnimPreview::execDivingDistanceTestStart },
			{ "ExecuteDequeMode", &AYCAM_AutoAnimPreview::execExecuteDequeMode },
			{ "Init", &AYCAM_AutoAnimPreview::execInit },
			{ "PreviewStart", &AYCAM_AutoAnimPreview::execPreviewStart },
			{ "PreviewStartAll", &AYCAM_AutoAnimPreview::execPreviewStartAll },
			{ "PreviewStartToArray", &AYCAM_AutoAnimPreview::execPreviewStartToArray },
			{ "StopPreview", &AYCAM_AutoAnimPreview::execStopPreview },
			{ "StrikeDistanceTestStart", &AYCAM_AutoAnimPreview::execStrikeDistanceTestStart },
			{ "Uninit", &AYCAM_AutoAnimPreview::execUninit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AYCAM_AutoAnimPreview_AddCategoryItemIDFromSettingMenuID_Statics
	{
		struct YCAM_AutoAnimPreview_eventAddCategoryItemIDFromSettingMenuID_Parms
		{
			int32 In_SettingMenuID;
			TArray<int32> Out_CategoryItemIDs;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_In_SettingMenuID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Out_CategoryItemIDs_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Out_CategoryItemIDs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AYCAM_AutoAnimPreview_AddCategoryItemIDFromSettingMenuID_Statics::NewProp_In_SettingMenuID = { "In_SettingMenuID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YCAM_AutoAnimPreview_eventAddCategoryItemIDFromSettingMenuID_Parms, In_SettingMenuID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AYCAM_AutoAnimPreview_AddCategoryItemIDFromSettingMenuID_Statics::NewProp_Out_CategoryItemIDs_Inner = { "Out_CategoryItemIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AYCAM_AutoAnimPreview_AddCategoryItemIDFromSettingMenuID_Statics::NewProp_Out_CategoryItemIDs = { "Out_CategoryItemIDs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YCAM_AutoAnimPreview_eventAddCategoryItemIDFromSettingMenuID_Parms, Out_CategoryItemIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AYCAM_AutoAnimPreview_AddCategoryItemIDFromSettingMenuID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AYCAM_AutoAnimPreview_AddCategoryItemIDFromSettingMenuID_Statics::NewProp_In_SettingMenuID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AYCAM_AutoAnimPreview_AddCategoryItemIDFromSettingMenuID_Statics::NewProp_Out_CategoryItemIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AYCAM_AutoAnimPreview_AddCategoryItemIDFromSettingMenuID_Statics::NewProp_Out_CategoryItemIDs,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AYCAM_AutoAnimPreview_AddCategoryItemIDFromSettingMenuID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YCAM_AutoAnimPreview.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AYCAM_AutoAnimPreview_AddCategoryItemIDFromSettingMenuID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AYCAM_AutoAnimPreview, nullptr, "AddCategoryItemIDFromSettingMenuID", nullptr, nullptr, sizeof(YCAM_AutoAnimPreview_eventAddCategoryItemIDFromSettingMenuID_Parms), Z_Construct_UFunction_AYCAM_AutoAnimPreview_AddCategoryItemIDFromSettingMenuID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AYCAM_AutoAnimPreview_AddCategoryItemIDFromSettingMenuID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AYCAM_AutoAnimPreview_AddCategoryItemIDFromSettingMenuID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AYCAM_AutoAnimPreview_AddCategoryItemIDFromSettingMenuID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AYCAM_AutoAnimPreview_AddCategoryItemIDFromSettingMenuID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AYCAM_AutoAnimPreview_AddCategoryItemIDFromSettingMenuID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AYCAM_AutoAnimPreview_AddPlaySituationFromCategoryItemID_Statics
	{
		struct YCAM_AutoAnimPreview_eventAddPlaySituationFromCategoryItemID_Parms
		{
			TArray<int32> In_CategoryItemIDs;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_In_CategoryItemIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_In_CategoryItemIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_In_CategoryItemIDs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AYCAM_AutoAnimPreview_AddPlaySituationFromCategoryItemID_Statics::NewProp_In_CategoryItemIDs_Inner = { "In_CategoryItemIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AYCAM_AutoAnimPreview_AddPlaySituationFromCategoryItemID_Statics::NewProp_In_CategoryItemIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AYCAM_AutoAnimPreview_AddPlaySituationFromCategoryItemID_Statics::NewProp_In_CategoryItemIDs = { "In_CategoryItemIDs", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YCAM_AutoAnimPreview_eventAddPlaySituationFromCategoryItemID_Parms, In_CategoryItemIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AYCAM_AutoAnimPreview_AddPlaySituationFromCategoryItemID_Statics::NewProp_In_CategoryItemIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AYCAM_AutoAnimPreview_AddPlaySituationFromCategoryItemID_Statics::NewProp_In_CategoryItemIDs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AYCAM_AutoAnimPreview_AddPlaySituationFromCategoryItemID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AYCAM_AutoAnimPreview_AddPlaySituationFromCategoryItemID_Statics::NewProp_In_CategoryItemIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AYCAM_AutoAnimPreview_AddPlaySituationFromCategoryItemID_Statics::NewProp_In_CategoryItemIDs,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AYCAM_AutoAnimPreview_AddPlaySituationFromCategoryItemID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YCAM_AutoAnimPreview.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AYCAM_AutoAnimPreview_AddPlaySituationFromCategoryItemID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AYCAM_AutoAnimPreview, nullptr, "AddPlaySituationFromCategoryItemID", nullptr, nullptr, sizeof(YCAM_AutoAnimPreview_eventAddPlaySituationFromCategoryItemID_Parms), Z_Construct_UFunction_AYCAM_AutoAnimPreview_AddPlaySituationFromCategoryItemID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AYCAM_AutoAnimPreview_AddPlaySituationFromCategoryItemID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AYCAM_AutoAnimPreview_AddPlaySituationFromCategoryItemID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AYCAM_AutoAnimPreview_AddPlaySituationFromCategoryItemID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AYCAM_AutoAnimPreview_AddPlaySituationFromCategoryItemID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AYCAM_AutoAnimPreview_AddPlaySituationFromCategoryItemID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AYCAM_AutoAnimPreview_AllTestStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AYCAM_AutoAnimPreview_AllTestStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YCAM_AutoAnimPreview.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AYCAM_AutoAnimPreview_AllTestStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AYCAM_AutoAnimPreview, nullptr, "AllTestStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AYCAM_AutoAnimPreview_AllTestStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AYCAM_AutoAnimPreview_AllTestStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AYCAM_AutoAnimPreview_AllTestStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AYCAM_AutoAnimPreview_AllTestStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AYCAM_AutoAnimPreview_DistanceTestStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AYCAM_AutoAnimPreview_DistanceTestStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YCAM_AutoAnimPreview.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AYCAM_AutoAnimPreview_DistanceTestStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AYCAM_AutoAnimPreview, nullptr, "DistanceTestStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AYCAM_AutoAnimPreview_DistanceTestStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AYCAM_AutoAnimPreview_DistanceTestStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AYCAM_AutoAnimPreview_DistanceTestStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AYCAM_AutoAnimPreview_DistanceTestStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AYCAM_AutoAnimPreview_DivingDistanceTestStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AYCAM_AutoAnimPreview_DivingDistanceTestStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YCAM_AutoAnimPreview.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AYCAM_AutoAnimPreview_DivingDistanceTestStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AYCAM_AutoAnimPreview, nullptr, "DivingDistanceTestStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AYCAM_AutoAnimPreview_DivingDistanceTestStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AYCAM_AutoAnimPreview_DivingDistanceTestStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AYCAM_AutoAnimPreview_DivingDistanceTestStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AYCAM_AutoAnimPreview_DivingDistanceTestStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AYCAM_AutoAnimPreview_ExecuteDequeMode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AYCAM_AutoAnimPreview_ExecuteDequeMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YCAM_AutoAnimPreview.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AYCAM_AutoAnimPreview_ExecuteDequeMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AYCAM_AutoAnimPreview, nullptr, "ExecuteDequeMode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AYCAM_AutoAnimPreview_ExecuteDequeMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AYCAM_AutoAnimPreview_ExecuteDequeMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AYCAM_AutoAnimPreview_ExecuteDequeMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AYCAM_AutoAnimPreview_ExecuteDequeMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AYCAM_AutoAnimPreview_Init_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AYCAM_AutoAnimPreview_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YCAM_AutoAnimPreview.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AYCAM_AutoAnimPreview_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AYCAM_AutoAnimPreview, nullptr, "Init", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AYCAM_AutoAnimPreview_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AYCAM_AutoAnimPreview_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AYCAM_AutoAnimPreview_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AYCAM_AutoAnimPreview_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AYCAM_AutoAnimPreview_PlayAnimations_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AYCAM_AutoAnimPreview_PlayAnimations_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YCAM_AutoAnimPreview.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AYCAM_AutoAnimPreview_PlayAnimations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AYCAM_AutoAnimPreview, nullptr, "PlayAnimations", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AYCAM_AutoAnimPreview_PlayAnimations_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AYCAM_AutoAnimPreview_PlayAnimations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AYCAM_AutoAnimPreview_PlayAnimations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AYCAM_AutoAnimPreview_PlayAnimations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AYCAM_AutoAnimPreview_PreviewStart_Statics
	{
		struct YCAM_AutoAnimPreview_eventPreviewStart_Parms
		{
			int32 In_SettingMenuID;
			EAutoAnimMode In_Mode;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_In_SettingMenuID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_In_Mode_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_In_Mode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AYCAM_AutoAnimPreview_PreviewStart_Statics::NewProp_In_SettingMenuID = { "In_SettingMenuID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YCAM_AutoAnimPreview_eventPreviewStart_Parms, In_SettingMenuID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AYCAM_AutoAnimPreview_PreviewStart_Statics::NewProp_In_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AYCAM_AutoAnimPreview_PreviewStart_Statics::NewProp_In_Mode = { "In_Mode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YCAM_AutoAnimPreview_eventPreviewStart_Parms, In_Mode), Z_Construct_UEnum_ABP_200508_EAutoAnimMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AYCAM_AutoAnimPreview_PreviewStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AYCAM_AutoAnimPreview_PreviewStart_Statics::NewProp_In_SettingMenuID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AYCAM_AutoAnimPreview_PreviewStart_Statics::NewProp_In_Mode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AYCAM_AutoAnimPreview_PreviewStart_Statics::NewProp_In_Mode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AYCAM_AutoAnimPreview_PreviewStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YCAM_AutoAnimPreview.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AYCAM_AutoAnimPreview_PreviewStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AYCAM_AutoAnimPreview, nullptr, "PreviewStart", nullptr, nullptr, sizeof(YCAM_AutoAnimPreview_eventPreviewStart_Parms), Z_Construct_UFunction_AYCAM_AutoAnimPreview_PreviewStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AYCAM_AutoAnimPreview_PreviewStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AYCAM_AutoAnimPreview_PreviewStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AYCAM_AutoAnimPreview_PreviewStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AYCAM_AutoAnimPreview_PreviewStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AYCAM_AutoAnimPreview_PreviewStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AYCAM_AutoAnimPreview_PreviewStartAll_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AYCAM_AutoAnimPreview_PreviewStartAll_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YCAM_AutoAnimPreview.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AYCAM_AutoAnimPreview_PreviewStartAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AYCAM_AutoAnimPreview, nullptr, "PreviewStartAll", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AYCAM_AutoAnimPreview_PreviewStartAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AYCAM_AutoAnimPreview_PreviewStartAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AYCAM_AutoAnimPreview_PreviewStartAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AYCAM_AutoAnimPreview_PreviewStartAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AYCAM_AutoAnimPreview_PreviewStartToArray_Statics
	{
		struct YCAM_AutoAnimPreview_eventPreviewStartToArray_Parms
		{
			TArray<int32> In_SettingMenuIDs;
			EAutoAnimMode In_Mode;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_In_SettingMenuIDs_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_In_SettingMenuIDs;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_In_Mode_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_In_Mode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AYCAM_AutoAnimPreview_PreviewStartToArray_Statics::NewProp_In_SettingMenuIDs_Inner = { "In_SettingMenuIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AYCAM_AutoAnimPreview_PreviewStartToArray_Statics::NewProp_In_SettingMenuIDs = { "In_SettingMenuIDs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YCAM_AutoAnimPreview_eventPreviewStartToArray_Parms, In_SettingMenuIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AYCAM_AutoAnimPreview_PreviewStartToArray_Statics::NewProp_In_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AYCAM_AutoAnimPreview_PreviewStartToArray_Statics::NewProp_In_Mode = { "In_Mode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YCAM_AutoAnimPreview_eventPreviewStartToArray_Parms, In_Mode), Z_Construct_UEnum_ABP_200508_EAutoAnimMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AYCAM_AutoAnimPreview_PreviewStartToArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AYCAM_AutoAnimPreview_PreviewStartToArray_Statics::NewProp_In_SettingMenuIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AYCAM_AutoAnimPreview_PreviewStartToArray_Statics::NewProp_In_SettingMenuIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AYCAM_AutoAnimPreview_PreviewStartToArray_Statics::NewProp_In_Mode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AYCAM_AutoAnimPreview_PreviewStartToArray_Statics::NewProp_In_Mode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AYCAM_AutoAnimPreview_PreviewStartToArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YCAM_AutoAnimPreview.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AYCAM_AutoAnimPreview_PreviewStartToArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AYCAM_AutoAnimPreview, nullptr, "PreviewStartToArray", nullptr, nullptr, sizeof(YCAM_AutoAnimPreview_eventPreviewStartToArray_Parms), Z_Construct_UFunction_AYCAM_AutoAnimPreview_PreviewStartToArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AYCAM_AutoAnimPreview_PreviewStartToArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AYCAM_AutoAnimPreview_PreviewStartToArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AYCAM_AutoAnimPreview_PreviewStartToArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AYCAM_AutoAnimPreview_PreviewStartToArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AYCAM_AutoAnimPreview_PreviewStartToArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AYCAM_AutoAnimPreview_StopPreview_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AYCAM_AutoAnimPreview_StopPreview_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YCAM_AutoAnimPreview.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AYCAM_AutoAnimPreview_StopPreview_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AYCAM_AutoAnimPreview, nullptr, "StopPreview", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AYCAM_AutoAnimPreview_StopPreview_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AYCAM_AutoAnimPreview_StopPreview_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AYCAM_AutoAnimPreview_StopPreview()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AYCAM_AutoAnimPreview_StopPreview_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AYCAM_AutoAnimPreview_StrikeDistanceTestStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AYCAM_AutoAnimPreview_StrikeDistanceTestStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YCAM_AutoAnimPreview.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AYCAM_AutoAnimPreview_StrikeDistanceTestStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AYCAM_AutoAnimPreview, nullptr, "StrikeDistanceTestStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AYCAM_AutoAnimPreview_StrikeDistanceTestStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AYCAM_AutoAnimPreview_StrikeDistanceTestStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AYCAM_AutoAnimPreview_StrikeDistanceTestStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AYCAM_AutoAnimPreview_StrikeDistanceTestStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AYCAM_AutoAnimPreview_Uninit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AYCAM_AutoAnimPreview_Uninit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YCAM_AutoAnimPreview.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AYCAM_AutoAnimPreview_Uninit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AYCAM_AutoAnimPreview, nullptr, "Uninit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AYCAM_AutoAnimPreview_Uninit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AYCAM_AutoAnimPreview_Uninit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AYCAM_AutoAnimPreview_Uninit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AYCAM_AutoAnimPreview_Uninit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AYCAM_AutoAnimPreview_NoRegister()
	{
		return AYCAM_AutoAnimPreview::StaticClass();
	}
	struct Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Mode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ModeQue_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ModeQue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModeQue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ModeQue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MenuDataMap_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MenuDataMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuDataMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_MenuDataMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MenuChildMap_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MenuChildMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuChildMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_MenuChildMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isPlayAnim_MetaData[];
#endif
		static void NewProp_isPlayAnim_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isPlayAnim;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CategoryItemIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryItemIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CategoryItemIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AutoAnimInfos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoAnimInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AutoAnimInfos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isDuplicateCategory_MetaData[];
#endif
		static void NewProp_isDuplicateCategory_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isDuplicateCategory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AYCAM_AutoAnimPreview_AddCategoryItemIDFromSettingMenuID, "AddCategoryItemIDFromSettingMenuID" }, // 59136526
		{ &Z_Construct_UFunction_AYCAM_AutoAnimPreview_AddPlaySituationFromCategoryItemID, "AddPlaySituationFromCategoryItemID" }, // 3814117912
		{ &Z_Construct_UFunction_AYCAM_AutoAnimPreview_AllTestStart, "AllTestStart" }, // 1422690334
		{ &Z_Construct_UFunction_AYCAM_AutoAnimPreview_DistanceTestStart, "DistanceTestStart" }, // 526662043
		{ &Z_Construct_UFunction_AYCAM_AutoAnimPreview_DivingDistanceTestStart, "DivingDistanceTestStart" }, // 1083175945
		{ &Z_Construct_UFunction_AYCAM_AutoAnimPreview_ExecuteDequeMode, "ExecuteDequeMode" }, // 4015124784
		{ &Z_Construct_UFunction_AYCAM_AutoAnimPreview_Init, "Init" }, // 633158768
		{ &Z_Construct_UFunction_AYCAM_AutoAnimPreview_PlayAnimations, "PlayAnimations" }, // 2933094178
		{ &Z_Construct_UFunction_AYCAM_AutoAnimPreview_PreviewStart, "PreviewStart" }, // 2143487361
		{ &Z_Construct_UFunction_AYCAM_AutoAnimPreview_PreviewStartAll, "PreviewStartAll" }, // 1688875724
		{ &Z_Construct_UFunction_AYCAM_AutoAnimPreview_PreviewStartToArray, "PreviewStartToArray" }, // 1777716061
		{ &Z_Construct_UFunction_AYCAM_AutoAnimPreview_StopPreview, "StopPreview" }, // 3854847294
		{ &Z_Construct_UFunction_AYCAM_AutoAnimPreview_StrikeDistanceTestStart, "StrikeDistanceTestStart" }, // 622826100
		{ &Z_Construct_UFunction_AYCAM_AutoAnimPreview_Uninit, "Uninit" }, // 2608677334
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "YCAM_AutoAnimPreview.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/YCAM_AutoAnimPreview.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::NewProp_Mode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YCAM_AutoAnimPreview" },
		{ "ModuleRelativePath", "Public/YCAM_AutoAnimPreview.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AYCAM_AutoAnimPreview, Mode), Z_Construct_UEnum_ABP_200508_EAutoAnimMode, METADATA_PARAMS(Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::NewProp_Mode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::NewProp_ModeQue_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::NewProp_ModeQue_Inner = { "ModeQue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ABP_200508_EAutoAnimMode, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::NewProp_ModeQue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YCAM_AutoAnimPreview" },
		{ "ModuleRelativePath", "Public/YCAM_AutoAnimPreview.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::NewProp_ModeQue = { "ModeQue", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AYCAM_AutoAnimPreview, ModeQue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::NewProp_ModeQue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::NewProp_ModeQue_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::NewProp_MenuDataMap_ValueProp = { "MenuDataMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FMovesTestMenuStructDefine, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::NewProp_MenuDataMap_Key_KeyProp = { "MenuDataMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::NewProp_MenuDataMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YCAM_AutoAnimPreview" },
		{ "ModuleRelativePath", "Public/YCAM_AutoAnimPreview.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::NewProp_MenuDataMap = { "MenuDataMap", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AYCAM_AutoAnimPreview, MenuDataMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::NewProp_MenuDataMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::NewProp_MenuDataMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::NewProp_MenuChildMap_ValueProp = { "MenuChildMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSettingMenuIDs, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::NewProp_MenuChildMap_Key_KeyProp = { "MenuChildMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::NewProp_MenuChildMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YCAM_AutoAnimPreview" },
		{ "ModuleRelativePath", "Public/YCAM_AutoAnimPreview.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::NewProp_MenuChildMap = { "MenuChildMap", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AYCAM_AutoAnimPreview, MenuChildMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::NewProp_MenuChildMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::NewProp_MenuChildMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::NewProp_isPlayAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YCAM_AutoAnimPreview" },
		{ "ModuleRelativePath", "Public/YCAM_AutoAnimPreview.h" },
	};
#endif
	void Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::NewProp_isPlayAnim_SetBit(void* Obj)
	{
		((AYCAM_AutoAnimPreview*)Obj)->isPlayAnim = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::NewProp_isPlayAnim = { "isPlayAnim", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AYCAM_AutoAnimPreview), &Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::NewProp_isPlayAnim_SetBit, METADATA_PARAMS(Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::NewProp_isPlayAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::NewProp_isPlayAnim_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::NewProp_CategoryItemIDs_Inner = { "CategoryItemIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::NewProp_CategoryItemIDs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YCAM_AutoAnimPreview" },
		{ "ModuleRelativePath", "Public/YCAM_AutoAnimPreview.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::NewProp_CategoryItemIDs = { "CategoryItemIDs", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AYCAM_AutoAnimPreview, CategoryItemIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::NewProp_CategoryItemIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::NewProp_CategoryItemIDs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::NewProp_AutoAnimInfos_Inner = { "AutoAnimInfos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAutoAnimInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::NewProp_AutoAnimInfos_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YCAM_AutoAnimPreview" },
		{ "ModuleRelativePath", "Public/YCAM_AutoAnimPreview.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::NewProp_AutoAnimInfos = { "AutoAnimInfos", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AYCAM_AutoAnimPreview, AutoAnimInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::NewProp_AutoAnimInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::NewProp_AutoAnimInfos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::NewProp_isDuplicateCategory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YCAM_AutoAnimPreview" },
		{ "ModuleRelativePath", "Public/YCAM_AutoAnimPreview.h" },
	};
#endif
	void Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::NewProp_isDuplicateCategory_SetBit(void* Obj)
	{
		((AYCAM_AutoAnimPreview*)Obj)->isDuplicateCategory = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::NewProp_isDuplicateCategory = { "isDuplicateCategory", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AYCAM_AutoAnimPreview), &Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::NewProp_isDuplicateCategory_SetBit, METADATA_PARAMS(Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::NewProp_isDuplicateCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::NewProp_isDuplicateCategory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::NewProp_Mode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::NewProp_Mode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::NewProp_ModeQue_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::NewProp_ModeQue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::NewProp_ModeQue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::NewProp_MenuDataMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::NewProp_MenuDataMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::NewProp_MenuDataMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::NewProp_MenuChildMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::NewProp_MenuChildMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::NewProp_MenuChildMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::NewProp_isPlayAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::NewProp_CategoryItemIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::NewProp_CategoryItemIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::NewProp_AutoAnimInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::NewProp_AutoAnimInfos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::NewProp_isDuplicateCategory,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AYCAM_AutoAnimPreview>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::ClassParams = {
		&AYCAM_AutoAnimPreview::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AYCAM_AutoAnimPreview()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AYCAM_AutoAnimPreview_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AYCAM_AutoAnimPreview, 626004238);
	template<> ABP_200508_API UClass* StaticClass<AYCAM_AutoAnimPreview>()
	{
		return AYCAM_AutoAnimPreview::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AYCAM_AutoAnimPreview(Z_Construct_UClass_AYCAM_AutoAnimPreview, &AYCAM_AutoAnimPreview::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AYCAM_AutoAnimPreview"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AYCAM_AutoAnimPreview);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
