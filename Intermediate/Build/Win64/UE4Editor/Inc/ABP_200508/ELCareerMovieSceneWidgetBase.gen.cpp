// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELCareerMovieSceneWidgetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCareerMovieSceneWidgetBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerMovieSceneWidgetBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerMovieSceneWidgetBase();
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerMovieSceneParam();
// End Cross Module References
	DEFINE_FUNCTION(UELCareerMovieSceneWidgetBase::execIsUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsUpdate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerMovieSceneWidgetBase::execSetUpdateFlag)
	{
		P_GET_UBOOL(Z_Param_bFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUpdateFlag(Z_Param_bFlag);
		P_NATIVE_END;
	}
	static FName NAME_UELCareerMovieSceneWidgetBase_ClearSubtitles = FName(TEXT("ClearSubtitles"));
	void UELCareerMovieSceneWidgetBase::ClearSubtitles()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELCareerMovieSceneWidgetBase_ClearSubtitles),NULL);
	}
	static FName NAME_UELCareerMovieSceneWidgetBase_OnCancelHoldDecision = FName(TEXT("OnCancelHoldDecision"));
	void UELCareerMovieSceneWidgetBase::OnCancelHoldDecision()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELCareerMovieSceneWidgetBase_OnCancelHoldDecision),NULL);
	}
	static FName NAME_UELCareerMovieSceneWidgetBase_Prepare = FName(TEXT("Prepare"));
	void UELCareerMovieSceneWidgetBase::Prepare(FCareerMovieSceneParam const& Param)
	{
		ELCareerMovieSceneWidgetBase_eventPrepare_Parms Parms;
		Parms.Param=Param;
		ProcessEvent(FindFunctionChecked(NAME_UELCareerMovieSceneWidgetBase_Prepare),&Parms);
	}
	static FName NAME_UELCareerMovieSceneWidgetBase_SetSubtitles = FName(TEXT("SetSubtitles"));
	void UELCareerMovieSceneWidgetBase::SetSubtitles(const FString& TextID)
	{
		ELCareerMovieSceneWidgetBase_eventSetSubtitles_Parms Parms;
		Parms.TextID=TextID;
		ProcessEvent(FindFunctionChecked(NAME_UELCareerMovieSceneWidgetBase_SetSubtitles),&Parms);
	}
	static FName NAME_UELCareerMovieSceneWidgetBase_StartMovie = FName(TEXT("StartMovie"));
	void UELCareerMovieSceneWidgetBase::StartMovie()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELCareerMovieSceneWidgetBase_StartMovie),NULL);
	}
	static FName NAME_UELCareerMovieSceneWidgetBase_TriggerEventOut = FName(TEXT("TriggerEventOut"));
	void UELCareerMovieSceneWidgetBase::TriggerEventOut()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELCareerMovieSceneWidgetBase_TriggerEventOut),NULL);
	}
	void UELCareerMovieSceneWidgetBase::StaticRegisterNativesUELCareerMovieSceneWidgetBase()
	{
		UClass* Class = UELCareerMovieSceneWidgetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsUpdate", &UELCareerMovieSceneWidgetBase::execIsUpdate },
			{ "SetUpdateFlag", &UELCareerMovieSceneWidgetBase::execSetUpdateFlag },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_ClearSubtitles_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_ClearSubtitles_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerMovieSceneWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_ClearSubtitles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerMovieSceneWidgetBase, nullptr, "ClearSubtitles", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_ClearSubtitles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_ClearSubtitles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_ClearSubtitles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_ClearSubtitles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_IsUpdate_Statics
	{
		struct ELCareerMovieSceneWidgetBase_eventIsUpdate_Parms
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
	void Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_IsUpdate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELCareerMovieSceneWidgetBase_eventIsUpdate_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_IsUpdate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerMovieSceneWidgetBase_eventIsUpdate_Parms), &Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_IsUpdate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_IsUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_IsUpdate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_IsUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerMovieSceneWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_IsUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerMovieSceneWidgetBase, nullptr, "IsUpdate", nullptr, nullptr, sizeof(ELCareerMovieSceneWidgetBase_eventIsUpdate_Parms), Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_IsUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_IsUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_IsUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_IsUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_IsUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_IsUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_OnCancelHoldDecision_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_OnCancelHoldDecision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerMovieSceneWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_OnCancelHoldDecision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerMovieSceneWidgetBase, nullptr, "OnCancelHoldDecision", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_OnCancelHoldDecision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_OnCancelHoldDecision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_OnCancelHoldDecision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_OnCancelHoldDecision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_Prepare_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Param_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Param;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_Prepare_Statics::NewProp_Param_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_Prepare_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerMovieSceneWidgetBase_eventPrepare_Parms, Param), Z_Construct_UScriptStruct_FCareerMovieSceneParam, METADATA_PARAMS(Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_Prepare_Statics::NewProp_Param_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_Prepare_Statics::NewProp_Param_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_Prepare_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_Prepare_Statics::NewProp_Param,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_Prepare_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerMovieSceneWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_Prepare_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerMovieSceneWidgetBase, nullptr, "Prepare", nullptr, nullptr, sizeof(ELCareerMovieSceneWidgetBase_eventPrepare_Parms), Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_Prepare_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_Prepare_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_Prepare_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_Prepare_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_Prepare()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_Prepare_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_SetSubtitles_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TextID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_SetSubtitles_Statics::NewProp_TextID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_SetSubtitles_Statics::NewProp_TextID = { "TextID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerMovieSceneWidgetBase_eventSetSubtitles_Parms, TextID), METADATA_PARAMS(Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_SetSubtitles_Statics::NewProp_TextID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_SetSubtitles_Statics::NewProp_TextID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_SetSubtitles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_SetSubtitles_Statics::NewProp_TextID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_SetSubtitles_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerMovieSceneWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_SetSubtitles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerMovieSceneWidgetBase, nullptr, "SetSubtitles", nullptr, nullptr, sizeof(ELCareerMovieSceneWidgetBase_eventSetSubtitles_Parms), Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_SetSubtitles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_SetSubtitles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_SetSubtitles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_SetSubtitles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_SetSubtitles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_SetSubtitles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_SetUpdateFlag_Statics
	{
		struct ELCareerMovieSceneWidgetBase_eventSetUpdateFlag_Parms
		{
			bool bFlag;
		};
		static void NewProp_bFlag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_SetUpdateFlag_Statics::NewProp_bFlag_SetBit(void* Obj)
	{
		((ELCareerMovieSceneWidgetBase_eventSetUpdateFlag_Parms*)Obj)->bFlag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_SetUpdateFlag_Statics::NewProp_bFlag = { "bFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerMovieSceneWidgetBase_eventSetUpdateFlag_Parms), &Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_SetUpdateFlag_Statics::NewProp_bFlag_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_SetUpdateFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_SetUpdateFlag_Statics::NewProp_bFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_SetUpdateFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerMovieSceneWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_SetUpdateFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerMovieSceneWidgetBase, nullptr, "SetUpdateFlag", nullptr, nullptr, sizeof(ELCareerMovieSceneWidgetBase_eventSetUpdateFlag_Parms), Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_SetUpdateFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_SetUpdateFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_SetUpdateFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_SetUpdateFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_SetUpdateFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_SetUpdateFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_StartMovie_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_StartMovie_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerMovieSceneWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_StartMovie_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerMovieSceneWidgetBase, nullptr, "StartMovie", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_StartMovie_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_StartMovie_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_StartMovie()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_StartMovie_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_TriggerEventOut_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_TriggerEventOut_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerMovieSceneWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_TriggerEventOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerMovieSceneWidgetBase, nullptr, "TriggerEventOut", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_TriggerEventOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_TriggerEventOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_TriggerEventOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_TriggerEventOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELCareerMovieSceneWidgetBase_NoRegister()
	{
		return UELCareerMovieSceneWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_UELCareerMovieSceneWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELCareerMovieSceneWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELCareerWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELCareerMovieSceneWidgetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_ClearSubtitles, "ClearSubtitles" }, // 2050101613
		{ &Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_IsUpdate, "IsUpdate" }, // 2538466395
		{ &Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_OnCancelHoldDecision, "OnCancelHoldDecision" }, // 3062321763
		{ &Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_Prepare, "Prepare" }, // 2184956412
		{ &Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_SetSubtitles, "SetSubtitles" }, // 1996831159
		{ &Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_SetUpdateFlag, "SetUpdateFlag" }, // 963036308
		{ &Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_StartMovie, "StartMovie" }, // 1773503360
		{ &Z_Construct_UFunction_UELCareerMovieSceneWidgetBase_TriggerEventOut, "TriggerEventOut" }, // 3911871811
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerMovieSceneWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELCareerMovieSceneWidgetBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCareerMovieSceneWidgetBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELCareerMovieSceneWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELCareerMovieSceneWidgetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELCareerMovieSceneWidgetBase_Statics::ClassParams = {
		&UELCareerMovieSceneWidgetBase::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELCareerMovieSceneWidgetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerMovieSceneWidgetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELCareerMovieSceneWidgetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELCareerMovieSceneWidgetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELCareerMovieSceneWidgetBase, 1485412478);
	template<> ABP_200508_API UClass* StaticClass<UELCareerMovieSceneWidgetBase>()
	{
		return UELCareerMovieSceneWidgetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELCareerMovieSceneWidgetBase(Z_Construct_UClass_UELCareerMovieSceneWidgetBase, &UELCareerMovieSceneWidgetBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELCareerMovieSceneWidgetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELCareerMovieSceneWidgetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
