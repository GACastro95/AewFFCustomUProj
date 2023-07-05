// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSWidgetHUD_AttentionPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSWidgetHUD_AttentionPoint() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_AttentionPoint_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_AttentionPoint();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSAttentionReason();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELSSWidgetHUD_AttentionPoint::execGetActText)
	{
		P_GET_ENUM(ESSAttentionReason,Z_Param_InActType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetActText(ESSAttentionReason(Z_Param_InActType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_AttentionPoint::execGetPointText)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InAddValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetPointText(Z_Param_InAddValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_AttentionPoint::execIsEmpty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEmpty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_AttentionPoint::execPlayOut)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayOut();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_AttentionPoint::execReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_AttentionPoint::execSetupState)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InAddValue);
		P_GET_ENUM(ESSAttentionReason,Z_Param_InActType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupState(Z_Param_InAddValue,ESSAttentionReason(Z_Param_InActType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_AttentionPoint::execUpdate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Update(Z_Param_InDeltaTime);
		P_NATIVE_END;
	}
	static FName NAME_UELSSWidgetHUD_AttentionPoint_Init = FName(TEXT("Init"));
	void UELSSWidgetHUD_AttentionPoint::Init()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_AttentionPoint_Init),NULL);
	}
	static FName NAME_UELSSWidgetHUD_AttentionPoint_PlayIn = FName(TEXT("PlayIn"));
	void UELSSWidgetHUD_AttentionPoint::PlayIn(int32 InAddValue, ESSAttentionReason InActType)
	{
		ELSSWidgetHUD_AttentionPoint_eventPlayIn_Parms Parms;
		Parms.InAddValue=InAddValue;
		Parms.InActType=InActType;
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_AttentionPoint_PlayIn),&Parms);
	}
	void UELSSWidgetHUD_AttentionPoint::StaticRegisterNativesUELSSWidgetHUD_AttentionPoint()
	{
		UClass* Class = UELSSWidgetHUD_AttentionPoint::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActText", &UELSSWidgetHUD_AttentionPoint::execGetActText },
			{ "GetPointText", &UELSSWidgetHUD_AttentionPoint::execGetPointText },
			{ "IsEmpty", &UELSSWidgetHUD_AttentionPoint::execIsEmpty },
			{ "PlayOut", &UELSSWidgetHUD_AttentionPoint::execPlayOut },
			{ "Reset", &UELSSWidgetHUD_AttentionPoint::execReset },
			{ "SetupState", &UELSSWidgetHUD_AttentionPoint::execSetupState },
			{ "Update", &UELSSWidgetHUD_AttentionPoint::execUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_GetActText_Statics
	{
		struct ELSSWidgetHUD_AttentionPoint_eventGetActText_Parms
		{
			ESSAttentionReason InActType;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InActType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InActType;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_GetActText_Statics::NewProp_InActType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_GetActText_Statics::NewProp_InActType = { "InActType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_AttentionPoint_eventGetActText_Parms, InActType), Z_Construct_UEnum_ABP_200508_ESSAttentionReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_GetActText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_AttentionPoint_eventGetActText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_GetActText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_GetActText_Statics::NewProp_InActType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_GetActText_Statics::NewProp_InActType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_GetActText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_GetActText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_GetActText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_AttentionPoint, nullptr, "GetActText", nullptr, nullptr, sizeof(ELSSWidgetHUD_AttentionPoint_eventGetActText_Parms), Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_GetActText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_GetActText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_GetActText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_GetActText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_GetActText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_GetActText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_GetPointText_Statics
	{
		struct ELSSWidgetHUD_AttentionPoint_eventGetPointText_Parms
		{
			int32 InAddValue;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InAddValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_GetPointText_Statics::NewProp_InAddValue = { "InAddValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_AttentionPoint_eventGetPointText_Parms, InAddValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_GetPointText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_AttentionPoint_eventGetPointText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_GetPointText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_GetPointText_Statics::NewProp_InAddValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_GetPointText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_GetPointText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_GetPointText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_AttentionPoint, nullptr, "GetPointText", nullptr, nullptr, sizeof(ELSSWidgetHUD_AttentionPoint_eventGetPointText_Parms), Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_GetPointText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_GetPointText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_GetPointText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_GetPointText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_GetPointText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_GetPointText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_Init_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_AttentionPoint, nullptr, "Init", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_IsEmpty_Statics
	{
		struct ELSSWidgetHUD_AttentionPoint_eventIsEmpty_Parms
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
	void Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_IsEmpty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_AttentionPoint_eventIsEmpty_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_IsEmpty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_AttentionPoint_eventIsEmpty_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_IsEmpty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_IsEmpty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_IsEmpty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_IsEmpty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_IsEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_AttentionPoint, nullptr, "IsEmpty", nullptr, nullptr, sizeof(ELSSWidgetHUD_AttentionPoint_eventIsEmpty_Parms), Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_IsEmpty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_IsEmpty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_IsEmpty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_IsEmpty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_IsEmpty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_IsEmpty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_PlayIn_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InAddValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InActType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InActType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_PlayIn_Statics::NewProp_InAddValue = { "InAddValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_AttentionPoint_eventPlayIn_Parms, InAddValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_PlayIn_Statics::NewProp_InActType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_PlayIn_Statics::NewProp_InActType = { "InActType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_AttentionPoint_eventPlayIn_Parms, InActType), Z_Construct_UEnum_ABP_200508_ESSAttentionReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_PlayIn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_PlayIn_Statics::NewProp_InAddValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_PlayIn_Statics::NewProp_InActType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_PlayIn_Statics::NewProp_InActType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_PlayIn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_PlayIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_AttentionPoint, nullptr, "PlayIn", nullptr, nullptr, sizeof(ELSSWidgetHUD_AttentionPoint_eventPlayIn_Parms), Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_PlayIn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_PlayIn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_PlayIn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_PlayIn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_PlayIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_PlayIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_PlayOut_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_PlayOut_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_PlayOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_AttentionPoint, nullptr, "PlayOut", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_PlayOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_PlayOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_PlayOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_PlayOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_Reset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_Reset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_AttentionPoint, nullptr, "Reset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_SetupState_Statics
	{
		struct ELSSWidgetHUD_AttentionPoint_eventSetupState_Parms
		{
			int32 InAddValue;
			ESSAttentionReason InActType;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InAddValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InActType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InActType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_SetupState_Statics::NewProp_InAddValue = { "InAddValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_AttentionPoint_eventSetupState_Parms, InAddValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_SetupState_Statics::NewProp_InActType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_SetupState_Statics::NewProp_InActType = { "InActType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_AttentionPoint_eventSetupState_Parms, InActType), Z_Construct_UEnum_ABP_200508_ESSAttentionReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_SetupState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_SetupState_Statics::NewProp_InAddValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_SetupState_Statics::NewProp_InActType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_SetupState_Statics::NewProp_InActType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_SetupState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_SetupState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_AttentionPoint, nullptr, "SetupState", nullptr, nullptr, sizeof(ELSSWidgetHUD_AttentionPoint_eventSetupState_Parms), Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_SetupState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_SetupState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_SetupState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_SetupState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_SetupState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_SetupState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_Update_Statics
	{
		struct ELSSWidgetHUD_AttentionPoint_eventUpdate_Parms
		{
			float InDeltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InDeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_Update_Statics::NewProp_InDeltaTime = { "InDeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_AttentionPoint_eventUpdate_Parms, InDeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_Update_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_Update_Statics::NewProp_InDeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_Update_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_AttentionPoint, nullptr, "Update", nullptr, nullptr, sizeof(ELSSWidgetHUD_AttentionPoint_eventUpdate_Parms), Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_Update_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_Update_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_Update_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_Update_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_Update()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_Update_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSWidgetHUD_AttentionPoint_NoRegister()
	{
		return UELSSWidgetHUD_AttentionPoint::StaticClass();
	}
	struct Z_Construct_UClass_UELSSWidgetHUD_AttentionPoint_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FontPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FontPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowAttentionPointTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShowAttentionPointTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsShowAttentionPoint_MetaData[];
#endif
		static void NewProp_IsShowAttentionPoint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsShowAttentionPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsDoneStartPlayOutPoint_MetaData[];
#endif
		static void NewProp_IsDoneStartPlayOutPoint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDoneStartPlayOutPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSWidgetHUD_AttentionPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSSWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSWidgetHUD_AttentionPoint_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_GetActText, "GetActText" }, // 1763918335
		{ &Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_GetPointText, "GetPointText" }, // 3030984441
		{ &Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_Init, "Init" }, // 127920103
		{ &Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_IsEmpty, "IsEmpty" }, // 2588547363
		{ &Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_PlayIn, "PlayIn" }, // 620735917
		{ &Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_PlayOut, "PlayOut" }, // 4172262923
		{ &Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_Reset, "Reset" }, // 4125718905
		{ &Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_SetupState, "SetupState" }, // 1600861485
		{ &Z_Construct_UFunction_UELSSWidgetHUD_AttentionPoint_Update, "Update" }, // 477469825
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AttentionPoint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSWidgetHUD_AttentionPoint.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionPoint.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AttentionPoint_Statics::NewProp_PlayInAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AttentionPoint" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AttentionPoint_Statics::NewProp_PlayInAnim = { "PlayInAnim", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_AttentionPoint, PlayInAnim), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AttentionPoint_Statics::NewProp_PlayInAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AttentionPoint_Statics::NewProp_PlayInAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AttentionPoint_Statics::NewProp_PlayOutAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AttentionPoint" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AttentionPoint_Statics::NewProp_PlayOutAnim = { "PlayOutAnim", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_AttentionPoint, PlayOutAnim), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AttentionPoint_Statics::NewProp_PlayOutAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AttentionPoint_Statics::NewProp_PlayOutAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AttentionPoint_Statics::NewProp_FontPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AttentionPoint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AttentionPoint_Statics::NewProp_FontPoint = { "FontPoint", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_AttentionPoint, FontPoint), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AttentionPoint_Statics::NewProp_FontPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AttentionPoint_Statics::NewProp_FontPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AttentionPoint_Statics::NewProp_ShowAttentionPointTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AttentionPoint" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AttentionPoint_Statics::NewProp_ShowAttentionPointTime = { "ShowAttentionPointTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_AttentionPoint, ShowAttentionPointTime), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AttentionPoint_Statics::NewProp_ShowAttentionPointTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AttentionPoint_Statics::NewProp_ShowAttentionPointTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AttentionPoint_Statics::NewProp_IsShowAttentionPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AttentionPoint" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionPoint.h" },
	};
#endif
	void Z_Construct_UClass_UELSSWidgetHUD_AttentionPoint_Statics::NewProp_IsShowAttentionPoint_SetBit(void* Obj)
	{
		((UELSSWidgetHUD_AttentionPoint*)Obj)->IsShowAttentionPoint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AttentionPoint_Statics::NewProp_IsShowAttentionPoint = { "IsShowAttentionPoint", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSWidgetHUD_AttentionPoint), &Z_Construct_UClass_UELSSWidgetHUD_AttentionPoint_Statics::NewProp_IsShowAttentionPoint_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AttentionPoint_Statics::NewProp_IsShowAttentionPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AttentionPoint_Statics::NewProp_IsShowAttentionPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AttentionPoint_Statics::NewProp_IsDoneStartPlayOutPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AttentionPoint" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AttentionPoint.h" },
	};
#endif
	void Z_Construct_UClass_UELSSWidgetHUD_AttentionPoint_Statics::NewProp_IsDoneStartPlayOutPoint_SetBit(void* Obj)
	{
		((UELSSWidgetHUD_AttentionPoint*)Obj)->IsDoneStartPlayOutPoint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AttentionPoint_Statics::NewProp_IsDoneStartPlayOutPoint = { "IsDoneStartPlayOutPoint", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSWidgetHUD_AttentionPoint), &Z_Construct_UClass_UELSSWidgetHUD_AttentionPoint_Statics::NewProp_IsDoneStartPlayOutPoint_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AttentionPoint_Statics::NewProp_IsDoneStartPlayOutPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AttentionPoint_Statics::NewProp_IsDoneStartPlayOutPoint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSWidgetHUD_AttentionPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AttentionPoint_Statics::NewProp_PlayInAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AttentionPoint_Statics::NewProp_PlayOutAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AttentionPoint_Statics::NewProp_FontPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AttentionPoint_Statics::NewProp_ShowAttentionPointTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AttentionPoint_Statics::NewProp_IsShowAttentionPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AttentionPoint_Statics::NewProp_IsDoneStartPlayOutPoint,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSWidgetHUD_AttentionPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSWidgetHUD_AttentionPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSWidgetHUD_AttentionPoint_Statics::ClassParams = {
		&UELSSWidgetHUD_AttentionPoint::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSSWidgetHUD_AttentionPoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AttentionPoint_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AttentionPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AttentionPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSWidgetHUD_AttentionPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSWidgetHUD_AttentionPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSWidgetHUD_AttentionPoint, 1298717791);
	template<> ABP_200508_API UClass* StaticClass<UELSSWidgetHUD_AttentionPoint>()
	{
		return UELSSWidgetHUD_AttentionPoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSWidgetHUD_AttentionPoint(Z_Construct_UClass_UELSSWidgetHUD_AttentionPoint, &UELSSWidgetHUD_AttentionPoint::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSWidgetHUD_AttentionPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSWidgetHUD_AttentionPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
