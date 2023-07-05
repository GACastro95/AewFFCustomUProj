// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSWidgetHUD_AreaCountDown.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSWidgetHUD_AreaCountDown() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSAreaCountDownTextType();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELSSWidgetHUD_AreaCountDown::execApplyAreaCountDown)
	{
		P_GET_UBOOL(Z_Param_inIsVisible);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InSecond);
		P_GET_ENUM(ESSAreaCountDownTextType,Z_Param_InTextType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyAreaCountDown(Z_Param_inIsVisible,Z_Param_InSecond,ESSAreaCountDownTextType(Z_Param_InTextType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_AreaCountDown::execApplyCountText)
	{
		P_GET_UBOOL(Z_Param_InIsMinute);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyCountText(Z_Param_InIsMinute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_AreaCountDown::execGetAnnounceText)
	{
		P_GET_ENUM(ESSAreaCountDownTextType,Z_Param_InTextType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetAnnounceText(ESSAreaCountDownTextType(Z_Param_InTextType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_AreaCountDown::execPlayIn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayIn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_AreaCountDown::execPlayOut)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayOut();
		P_NATIVE_END;
	}
	static FName NAME_UELSSWidgetHUD_AreaCountDown_ApplyAreaShrinkText = FName(TEXT("ApplyAreaShrinkText"));
	void UELSSWidgetHUD_AreaCountDown::ApplyAreaShrinkText(ESSAreaCountDownTextType InTextType)
	{
		ELSSWidgetHUD_AreaCountDown_eventApplyAreaShrinkText_Parms Parms;
		Parms.InTextType=InTextType;
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_AreaCountDown_ApplyAreaShrinkText),&Parms);
	}
	static FName NAME_UELSSWidgetHUD_AreaCountDown_Init = FName(TEXT("Init"));
	void UELSSWidgetHUD_AreaCountDown::Init()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_AreaCountDown_Init),NULL);
	}
	void UELSSWidgetHUD_AreaCountDown::StaticRegisterNativesUELSSWidgetHUD_AreaCountDown()
	{
		UClass* Class = UELSSWidgetHUD_AreaCountDown::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyAreaCountDown", &UELSSWidgetHUD_AreaCountDown::execApplyAreaCountDown },
			{ "ApplyCountText", &UELSSWidgetHUD_AreaCountDown::execApplyCountText },
			{ "GetAnnounceText", &UELSSWidgetHUD_AreaCountDown::execGetAnnounceText },
			{ "PlayIn", &UELSSWidgetHUD_AreaCountDown::execPlayIn },
			{ "PlayOut", &UELSSWidgetHUD_AreaCountDown::execPlayOut },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_ApplyAreaCountDown_Statics
	{
		struct ELSSWidgetHUD_AreaCountDown_eventApplyAreaCountDown_Parms
		{
			bool inIsVisible;
			float InSecond;
			ESSAreaCountDownTextType InTextType;
		};
		static void NewProp_inIsVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inIsVisible;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InSecond;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InTextType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InTextType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_ApplyAreaCountDown_Statics::NewProp_inIsVisible_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_AreaCountDown_eventApplyAreaCountDown_Parms*)Obj)->inIsVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_ApplyAreaCountDown_Statics::NewProp_inIsVisible = { "inIsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_AreaCountDown_eventApplyAreaCountDown_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_ApplyAreaCountDown_Statics::NewProp_inIsVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_ApplyAreaCountDown_Statics::NewProp_InSecond = { "InSecond", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_AreaCountDown_eventApplyAreaCountDown_Parms, InSecond), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_ApplyAreaCountDown_Statics::NewProp_InTextType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_ApplyAreaCountDown_Statics::NewProp_InTextType = { "InTextType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_AreaCountDown_eventApplyAreaCountDown_Parms, InTextType), Z_Construct_UEnum_ABP_200508_ESSAreaCountDownTextType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_ApplyAreaCountDown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_ApplyAreaCountDown_Statics::NewProp_inIsVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_ApplyAreaCountDown_Statics::NewProp_InSecond,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_ApplyAreaCountDown_Statics::NewProp_InTextType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_ApplyAreaCountDown_Statics::NewProp_InTextType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_ApplyAreaCountDown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AreaCountDown.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_ApplyAreaCountDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown, nullptr, "ApplyAreaCountDown", nullptr, nullptr, sizeof(ELSSWidgetHUD_AreaCountDown_eventApplyAreaCountDown_Parms), Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_ApplyAreaCountDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_ApplyAreaCountDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_ApplyAreaCountDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_ApplyAreaCountDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_ApplyAreaCountDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_ApplyAreaCountDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_ApplyAreaShrinkText_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InTextType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InTextType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_ApplyAreaShrinkText_Statics::NewProp_InTextType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_ApplyAreaShrinkText_Statics::NewProp_InTextType = { "InTextType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_AreaCountDown_eventApplyAreaShrinkText_Parms, InTextType), Z_Construct_UEnum_ABP_200508_ESSAreaCountDownTextType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_ApplyAreaShrinkText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_ApplyAreaShrinkText_Statics::NewProp_InTextType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_ApplyAreaShrinkText_Statics::NewProp_InTextType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_ApplyAreaShrinkText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AreaCountDown.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_ApplyAreaShrinkText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown, nullptr, "ApplyAreaShrinkText", nullptr, nullptr, sizeof(ELSSWidgetHUD_AreaCountDown_eventApplyAreaShrinkText_Parms), Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_ApplyAreaShrinkText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_ApplyAreaShrinkText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_ApplyAreaShrinkText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_ApplyAreaShrinkText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_ApplyAreaShrinkText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_ApplyAreaShrinkText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_ApplyCountText_Statics
	{
		struct ELSSWidgetHUD_AreaCountDown_eventApplyCountText_Parms
		{
			bool InIsMinute;
		};
		static void NewProp_InIsMinute_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InIsMinute;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_ApplyCountText_Statics::NewProp_InIsMinute_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_AreaCountDown_eventApplyCountText_Parms*)Obj)->InIsMinute = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_ApplyCountText_Statics::NewProp_InIsMinute = { "InIsMinute", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_AreaCountDown_eventApplyCountText_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_ApplyCountText_Statics::NewProp_InIsMinute_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_ApplyCountText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_ApplyCountText_Statics::NewProp_InIsMinute,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_ApplyCountText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AreaCountDown.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_ApplyCountText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown, nullptr, "ApplyCountText", nullptr, nullptr, sizeof(ELSSWidgetHUD_AreaCountDown_eventApplyCountText_Parms), Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_ApplyCountText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_ApplyCountText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_ApplyCountText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_ApplyCountText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_ApplyCountText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_ApplyCountText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_GetAnnounceText_Statics
	{
		struct ELSSWidgetHUD_AreaCountDown_eventGetAnnounceText_Parms
		{
			ESSAreaCountDownTextType InTextType;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InTextType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InTextType;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_GetAnnounceText_Statics::NewProp_InTextType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_GetAnnounceText_Statics::NewProp_InTextType = { "InTextType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_AreaCountDown_eventGetAnnounceText_Parms, InTextType), Z_Construct_UEnum_ABP_200508_ESSAreaCountDownTextType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_GetAnnounceText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_AreaCountDown_eventGetAnnounceText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_GetAnnounceText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_GetAnnounceText_Statics::NewProp_InTextType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_GetAnnounceText_Statics::NewProp_InTextType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_GetAnnounceText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_GetAnnounceText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AreaCountDown.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_GetAnnounceText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown, nullptr, "GetAnnounceText", nullptr, nullptr, sizeof(ELSSWidgetHUD_AreaCountDown_eventGetAnnounceText_Parms), Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_GetAnnounceText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_GetAnnounceText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_GetAnnounceText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_GetAnnounceText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_GetAnnounceText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_GetAnnounceText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_Init_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AreaCountDown.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown, nullptr, "Init", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_PlayIn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_PlayIn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AreaCountDown.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_PlayIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown, nullptr, "PlayIn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_PlayIn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_PlayIn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_PlayIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_PlayIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_PlayOut_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_PlayOut_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AreaCountDown.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_PlayOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown, nullptr, "PlayOut", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_PlayOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_PlayOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_PlayOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_PlayOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown_NoRegister()
	{
		return UELSSWidgetHUD_AreaCountDown::StaticClass();
	}
	struct Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CountMinute_10Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CountMinute_10Material;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CountMinute_01Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CountMinute_01Material;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CountSecond_10Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CountSecond_10Material;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CountSecond_01Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CountSecond_01Material;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayInAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayInAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayOutAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayOutAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Minutes_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Minutes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Seconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Seconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsShowAreaCountDown_MetaData[];
#endif
		static void NewProp_IsShowAreaCountDown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsShowAreaCountDown;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSSWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_ApplyAreaCountDown, "ApplyAreaCountDown" }, // 2090876644
		{ &Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_ApplyAreaShrinkText, "ApplyAreaShrinkText" }, // 51978624
		{ &Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_ApplyCountText, "ApplyCountText" }, // 241800315
		{ &Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_GetAnnounceText, "GetAnnounceText" }, // 4234863734
		{ &Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_Init, "Init" }, // 3069409527
		{ &Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_PlayIn, "PlayIn" }, // 4053108276
		{ &Z_Construct_UFunction_UELSSWidgetHUD_AreaCountDown_PlayOut, "PlayOut" }, // 498519617
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSWidgetHUD_AreaCountDown.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AreaCountDown.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown_Statics::NewProp_CountMinute_10Material_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AreaCountDown" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AreaCountDown.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown_Statics::NewProp_CountMinute_10Material = { "CountMinute_10Material", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_AreaCountDown, CountMinute_10Material), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown_Statics::NewProp_CountMinute_10Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown_Statics::NewProp_CountMinute_10Material_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown_Statics::NewProp_CountMinute_01Material_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AreaCountDown" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AreaCountDown.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown_Statics::NewProp_CountMinute_01Material = { "CountMinute_01Material", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_AreaCountDown, CountMinute_01Material), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown_Statics::NewProp_CountMinute_01Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown_Statics::NewProp_CountMinute_01Material_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown_Statics::NewProp_CountSecond_10Material_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AreaCountDown" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AreaCountDown.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown_Statics::NewProp_CountSecond_10Material = { "CountSecond_10Material", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_AreaCountDown, CountSecond_10Material), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown_Statics::NewProp_CountSecond_10Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown_Statics::NewProp_CountSecond_10Material_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown_Statics::NewProp_CountSecond_01Material_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AreaCountDown" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AreaCountDown.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown_Statics::NewProp_CountSecond_01Material = { "CountSecond_01Material", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_AreaCountDown, CountSecond_01Material), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown_Statics::NewProp_CountSecond_01Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown_Statics::NewProp_CountSecond_01Material_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown_Statics::NewProp_PlayInAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AreaCountDown" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AreaCountDown.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown_Statics::NewProp_PlayInAnim = { "PlayInAnim", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_AreaCountDown, PlayInAnim), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown_Statics::NewProp_PlayInAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown_Statics::NewProp_PlayInAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown_Statics::NewProp_PlayOutAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AreaCountDown" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AreaCountDown.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown_Statics::NewProp_PlayOutAnim = { "PlayOutAnim", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_AreaCountDown, PlayOutAnim), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown_Statics::NewProp_PlayOutAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown_Statics::NewProp_PlayOutAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown_Statics::NewProp_Minutes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AreaCountDown" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AreaCountDown.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown_Statics::NewProp_Minutes = { "Minutes", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_AreaCountDown, Minutes), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown_Statics::NewProp_Minutes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown_Statics::NewProp_Minutes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown_Statics::NewProp_Seconds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AreaCountDown" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AreaCountDown.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown_Statics::NewProp_Seconds = { "Seconds", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_AreaCountDown, Seconds), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown_Statics::NewProp_Seconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown_Statics::NewProp_Seconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown_Statics::NewProp_IsShowAreaCountDown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AreaCountDown" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AreaCountDown.h" },
	};
#endif
	void Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown_Statics::NewProp_IsShowAreaCountDown_SetBit(void* Obj)
	{
		((UELSSWidgetHUD_AreaCountDown*)Obj)->IsShowAreaCountDown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown_Statics::NewProp_IsShowAreaCountDown = { "IsShowAreaCountDown", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSWidgetHUD_AreaCountDown), &Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown_Statics::NewProp_IsShowAreaCountDown_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown_Statics::NewProp_IsShowAreaCountDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown_Statics::NewProp_IsShowAreaCountDown_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown_Statics::NewProp_CountMinute_10Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown_Statics::NewProp_CountMinute_01Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown_Statics::NewProp_CountSecond_10Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown_Statics::NewProp_CountSecond_01Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown_Statics::NewProp_PlayInAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown_Statics::NewProp_PlayOutAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown_Statics::NewProp_Minutes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown_Statics::NewProp_Seconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown_Statics::NewProp_IsShowAreaCountDown,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSWidgetHUD_AreaCountDown>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown_Statics::ClassParams = {
		&UELSSWidgetHUD_AreaCountDown::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSWidgetHUD_AreaCountDown, 87243031);
	template<> ABP_200508_API UClass* StaticClass<UELSSWidgetHUD_AreaCountDown>()
	{
		return UELSSWidgetHUD_AreaCountDown::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSWidgetHUD_AreaCountDown(Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown, &UELSSWidgetHUD_AreaCountDown::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSWidgetHUD_AreaCountDown"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSWidgetHUD_AreaCountDown);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
