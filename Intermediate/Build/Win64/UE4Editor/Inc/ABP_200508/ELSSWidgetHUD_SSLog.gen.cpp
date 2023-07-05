// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSWidgetHUD_SSLog.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSWidgetHUD_SSLog() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_SSLog_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_SSLog();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSLogTextParam();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
// End Cross Module References
	DEFINE_FUNCTION(UELSSWidgetHUD_SSLog::execIsShow)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsShow();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_SSLog::execPlayInOutAnimation)
	{
		P_GET_UBOOL(Z_Param_InPlayIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayInOutAnimation(Z_Param_InPlayIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_SSLog::execReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_SSLog::execResetAnimationState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetAnimationState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_SSLog::execSetTextAndColorByList)
	{
		P_GET_TARRAY_REF(FSSLogTextParam,Z_Param_Out_inTextParam);
		P_GET_OBJECT(UTexture2D,Z_Param_InIcon);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTextAndColorByList(Z_Param_Out_inTextParam,Z_Param_InIcon);
		P_NATIVE_END;
	}
	static FName NAME_UELSSWidgetHUD_SSLog_SetLogTextParam = FName(TEXT("SetLogTextParam"));
	void UELSSWidgetHUD_SSLog::SetLogTextParam(FSSLogTextParam const& InParam, int32 InIndex)
	{
		ELSSWidgetHUD_SSLog_eventSetLogTextParam_Parms Parms;
		Parms.InParam=InParam;
		Parms.InIndex=InIndex;
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_SSLog_SetLogTextParam),&Parms);
	}
	static FName NAME_UELSSWidgetHUD_SSLog_SetLogTextVisible = FName(TEXT("SetLogTextVisible"));
	void UELSSWidgetHUD_SSLog::SetLogTextVisible(bool InVisible, int32 InIndex)
	{
		ELSSWidgetHUD_SSLog_eventSetLogTextVisible_Parms Parms;
		Parms.InVisible=InVisible ? true : false;
		Parms.InIndex=InIndex;
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_SSLog_SetLogTextVisible),&Parms);
	}
	void UELSSWidgetHUD_SSLog::StaticRegisterNativesUELSSWidgetHUD_SSLog()
	{
		UClass* Class = UELSSWidgetHUD_SSLog::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsShow", &UELSSWidgetHUD_SSLog::execIsShow },
			{ "PlayInOutAnimation", &UELSSWidgetHUD_SSLog::execPlayInOutAnimation },
			{ "Reset", &UELSSWidgetHUD_SSLog::execReset },
			{ "ResetAnimationState", &UELSSWidgetHUD_SSLog::execResetAnimationState },
			{ "SetTextAndColorByList", &UELSSWidgetHUD_SSLog::execSetTextAndColorByList },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_SSLog_IsShow_Statics
	{
		struct ELSSWidgetHUD_SSLog_eventIsShow_Parms
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
	void Z_Construct_UFunction_UELSSWidgetHUD_SSLog_IsShow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_SSLog_eventIsShow_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_SSLog_IsShow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_SSLog_eventIsShow_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_SSLog_IsShow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_SSLog_IsShow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_SSLog_IsShow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_SSLog_IsShow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_SSLog.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_SSLog_IsShow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_SSLog, nullptr, "IsShow", nullptr, nullptr, sizeof(ELSSWidgetHUD_SSLog_eventIsShow_Parms), Z_Construct_UFunction_UELSSWidgetHUD_SSLog_IsShow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_SSLog_IsShow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_SSLog_IsShow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_SSLog_IsShow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_SSLog_IsShow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_SSLog_IsShow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_SSLog_PlayInOutAnimation_Statics
	{
		struct ELSSWidgetHUD_SSLog_eventPlayInOutAnimation_Parms
		{
			bool InPlayIn;
		};
		static void NewProp_InPlayIn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InPlayIn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSWidgetHUD_SSLog_PlayInOutAnimation_Statics::NewProp_InPlayIn_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_SSLog_eventPlayInOutAnimation_Parms*)Obj)->InPlayIn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_SSLog_PlayInOutAnimation_Statics::NewProp_InPlayIn = { "InPlayIn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_SSLog_eventPlayInOutAnimation_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_SSLog_PlayInOutAnimation_Statics::NewProp_InPlayIn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_SSLog_PlayInOutAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_SSLog_PlayInOutAnimation_Statics::NewProp_InPlayIn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_SSLog_PlayInOutAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_SSLog.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_SSLog_PlayInOutAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_SSLog, nullptr, "PlayInOutAnimation", nullptr, nullptr, sizeof(ELSSWidgetHUD_SSLog_eventPlayInOutAnimation_Parms), Z_Construct_UFunction_UELSSWidgetHUD_SSLog_PlayInOutAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_SSLog_PlayInOutAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_SSLog_PlayInOutAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_SSLog_PlayInOutAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_SSLog_PlayInOutAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_SSLog_PlayInOutAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_SSLog_Reset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_SSLog_Reset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_SSLog.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_SSLog_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_SSLog, nullptr, "Reset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_SSLog_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_SSLog_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_SSLog_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_SSLog_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_SSLog_ResetAnimationState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_SSLog_ResetAnimationState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_SSLog.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_SSLog_ResetAnimationState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_SSLog, nullptr, "ResetAnimationState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_SSLog_ResetAnimationState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_SSLog_ResetAnimationState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_SSLog_ResetAnimationState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_SSLog_ResetAnimationState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_SSLog_SetLogTextParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InParam;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_SSLog_SetLogTextParam_Statics::NewProp_InParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_SSLog_SetLogTextParam_Statics::NewProp_InParam = { "InParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_SSLog_eventSetLogTextParam_Parms, InParam), Z_Construct_UScriptStruct_FSSLogTextParam, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_SSLog_SetLogTextParam_Statics::NewProp_InParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_SSLog_SetLogTextParam_Statics::NewProp_InParam_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_SSLog_SetLogTextParam_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_SSLog_eventSetLogTextParam_Parms, InIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_SSLog_SetLogTextParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_SSLog_SetLogTextParam_Statics::NewProp_InParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_SSLog_SetLogTextParam_Statics::NewProp_InIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_SSLog_SetLogTextParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_SSLog.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_SSLog_SetLogTextParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_SSLog, nullptr, "SetLogTextParam", nullptr, nullptr, sizeof(ELSSWidgetHUD_SSLog_eventSetLogTextParam_Parms), Z_Construct_UFunction_UELSSWidgetHUD_SSLog_SetLogTextParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_SSLog_SetLogTextParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_SSLog_SetLogTextParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_SSLog_SetLogTextParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_SSLog_SetLogTextParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_SSLog_SetLogTextParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_SSLog_SetLogTextVisible_Statics
	{
		static void NewProp_InVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InVisible;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSWidgetHUD_SSLog_SetLogTextVisible_Statics::NewProp_InVisible_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_SSLog_eventSetLogTextVisible_Parms*)Obj)->InVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_SSLog_SetLogTextVisible_Statics::NewProp_InVisible = { "InVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_SSLog_eventSetLogTextVisible_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_SSLog_SetLogTextVisible_Statics::NewProp_InVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_SSLog_SetLogTextVisible_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_SSLog_eventSetLogTextVisible_Parms, InIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_SSLog_SetLogTextVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_SSLog_SetLogTextVisible_Statics::NewProp_InVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_SSLog_SetLogTextVisible_Statics::NewProp_InIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_SSLog_SetLogTextVisible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_SSLog.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_SSLog_SetLogTextVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_SSLog, nullptr, "SetLogTextVisible", nullptr, nullptr, sizeof(ELSSWidgetHUD_SSLog_eventSetLogTextVisible_Parms), Z_Construct_UFunction_UELSSWidgetHUD_SSLog_SetLogTextVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_SSLog_SetLogTextVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_SSLog_SetLogTextVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_SSLog_SetLogTextVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_SSLog_SetLogTextVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_SSLog_SetLogTextVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_SSLog_SetTextAndColorByList_Statics
	{
		struct ELSSWidgetHUD_SSLog_eventSetTextAndColorByList_Parms
		{
			TArray<FSSLogTextParam> inTextParam;
			UTexture2D* InIcon;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inTextParam_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inTextParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_inTextParam;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InIcon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_SSLog_SetTextAndColorByList_Statics::NewProp_inTextParam_Inner = { "inTextParam", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSLogTextParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_SSLog_SetTextAndColorByList_Statics::NewProp_inTextParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_SSLog_SetTextAndColorByList_Statics::NewProp_inTextParam = { "inTextParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_SSLog_eventSetTextAndColorByList_Parms, inTextParam), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_SSLog_SetTextAndColorByList_Statics::NewProp_inTextParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_SSLog_SetTextAndColorByList_Statics::NewProp_inTextParam_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_SSLog_SetTextAndColorByList_Statics::NewProp_InIcon = { "InIcon", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_SSLog_eventSetTextAndColorByList_Parms, InIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_SSLog_SetTextAndColorByList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_SSLog_SetTextAndColorByList_Statics::NewProp_inTextParam_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_SSLog_SetTextAndColorByList_Statics::NewProp_inTextParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_SSLog_SetTextAndColorByList_Statics::NewProp_InIcon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_SSLog_SetTextAndColorByList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_SSLog.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_SSLog_SetTextAndColorByList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_SSLog, nullptr, "SetTextAndColorByList", nullptr, nullptr, sizeof(ELSSWidgetHUD_SSLog_eventSetTextAndColorByList_Parms), Z_Construct_UFunction_UELSSWidgetHUD_SSLog_SetTextAndColorByList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_SSLog_SetTextAndColorByList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_SSLog_SetTextAndColorByList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_SSLog_SetTextAndColorByList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_SSLog_SetTextAndColorByList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_SSLog_SetTextAndColorByList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSWidgetHUD_SSLog_NoRegister()
	{
		return UELSSWidgetHUD_SSLog::StaticClass();
	}
	struct Z_Construct_UClass_UELSSWidgetHUD_SSLog_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayInAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayInAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayOutAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayOutAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LogIconImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LogIconImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayoutWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LayoutWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizonalBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HorizonalBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LogTextLen_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LogTextLen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoIconMargin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NoIconMargin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WithIconMargin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WithIconMargin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSWidgetHUD_SSLog_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSSWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSWidgetHUD_SSLog_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSWidgetHUD_SSLog_IsShow, "IsShow" }, // 3370006936
		{ &Z_Construct_UFunction_UELSSWidgetHUD_SSLog_PlayInOutAnimation, "PlayInOutAnimation" }, // 2778834367
		{ &Z_Construct_UFunction_UELSSWidgetHUD_SSLog_Reset, "Reset" }, // 201465088
		{ &Z_Construct_UFunction_UELSSWidgetHUD_SSLog_ResetAnimationState, "ResetAnimationState" }, // 2294201379
		{ &Z_Construct_UFunction_UELSSWidgetHUD_SSLog_SetLogTextParam, "SetLogTextParam" }, // 2402739654
		{ &Z_Construct_UFunction_UELSSWidgetHUD_SSLog_SetLogTextVisible, "SetLogTextVisible" }, // 2143441268
		{ &Z_Construct_UFunction_UELSSWidgetHUD_SSLog_SetTextAndColorByList, "SetTextAndColorByList" }, // 1861351782
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_SSLog_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSWidgetHUD_SSLog.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_SSLog.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_SSLog_Statics::NewProp_PlayInAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_SSLog" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_SSLog.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_SSLog_Statics::NewProp_PlayInAnim = { "PlayInAnim", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_SSLog, PlayInAnim), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_SSLog_Statics::NewProp_PlayInAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_SSLog_Statics::NewProp_PlayInAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_SSLog_Statics::NewProp_PlayOutAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_SSLog" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_SSLog.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_SSLog_Statics::NewProp_PlayOutAnim = { "PlayOutAnim", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_SSLog, PlayOutAnim), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_SSLog_Statics::NewProp_PlayOutAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_SSLog_Statics::NewProp_PlayOutAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_SSLog_Statics::NewProp_LogIconImage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_SSLog" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_SSLog.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_SSLog_Statics::NewProp_LogIconImage = { "LogIconImage", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_SSLog, LogIconImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_SSLog_Statics::NewProp_LogIconImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_SSLog_Statics::NewProp_LogIconImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_SSLog_Statics::NewProp_LayoutWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_SSLog" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_SSLog.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_SSLog_Statics::NewProp_LayoutWidget = { "LayoutWidget", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_SSLog, LayoutWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_SSLog_Statics::NewProp_LayoutWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_SSLog_Statics::NewProp_LayoutWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_SSLog_Statics::NewProp_HorizonalBox_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_SSLog" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_SSLog.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_SSLog_Statics::NewProp_HorizonalBox = { "HorizonalBox", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_SSLog, HorizonalBox), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_SSLog_Statics::NewProp_HorizonalBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_SSLog_Statics::NewProp_HorizonalBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_SSLog_Statics::NewProp_LogTextLen_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_SSLog" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_SSLog.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELSSWidgetHUD_SSLog_Statics::NewProp_LogTextLen = { "LogTextLen", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_SSLog, LogTextLen), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_SSLog_Statics::NewProp_LogTextLen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_SSLog_Statics::NewProp_LogTextLen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_SSLog_Statics::NewProp_NoIconMargin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_SSLog" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_SSLog.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSWidgetHUD_SSLog_Statics::NewProp_NoIconMargin = { "NoIconMargin", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_SSLog, NoIconMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_SSLog_Statics::NewProp_NoIconMargin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_SSLog_Statics::NewProp_NoIconMargin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_SSLog_Statics::NewProp_WithIconMargin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_SSLog" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_SSLog.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSWidgetHUD_SSLog_Statics::NewProp_WithIconMargin = { "WithIconMargin", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_SSLog, WithIconMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_SSLog_Statics::NewProp_WithIconMargin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_SSLog_Statics::NewProp_WithIconMargin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSWidgetHUD_SSLog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_SSLog_Statics::NewProp_PlayInAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_SSLog_Statics::NewProp_PlayOutAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_SSLog_Statics::NewProp_LogIconImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_SSLog_Statics::NewProp_LayoutWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_SSLog_Statics::NewProp_HorizonalBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_SSLog_Statics::NewProp_LogTextLen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_SSLog_Statics::NewProp_NoIconMargin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_SSLog_Statics::NewProp_WithIconMargin,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSWidgetHUD_SSLog_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSWidgetHUD_SSLog>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSWidgetHUD_SSLog_Statics::ClassParams = {
		&UELSSWidgetHUD_SSLog::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSSWidgetHUD_SSLog_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_SSLog_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_SSLog_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_SSLog_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSWidgetHUD_SSLog()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSWidgetHUD_SSLog_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSWidgetHUD_SSLog, 4059576453);
	template<> ABP_200508_API UClass* StaticClass<UELSSWidgetHUD_SSLog>()
	{
		return UELSSWidgetHUD_SSLog::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSWidgetHUD_SSLog(Z_Construct_UClass_UELSSWidgetHUD_SSLog, &UELSSWidgetHUD_SSLog::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSWidgetHUD_SSLog"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSWidgetHUD_SSLog);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
