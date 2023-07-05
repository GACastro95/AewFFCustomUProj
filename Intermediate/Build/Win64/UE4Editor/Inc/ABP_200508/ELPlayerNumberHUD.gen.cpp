// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELPlayerNumberHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELPlayerNumberHUD() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELPlayerNumberHUD_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELPlayerNumberHUD();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateVisibility();
	ABP_200508_API UClass* Z_Construct_UClass_UELTagMatchIconBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELGeneralFontBase_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELPlayerNumberHUD::execGetTopVisibility_N)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESlateVisibility*)Z_Param__Result=P_THIS->GetTopVisibility_N();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPlayerNumberHUD::execResetShowTimer_N)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetShowTimer_N();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPlayerNumberHUD::execSetTagIcons)
	{
		P_GET_TARRAY(UELTagMatchIconBase*,Z_Param_InTagIcons);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTagIcons(Z_Param_InTagIcons);
		P_NATIVE_END;
	}
	static FName NAME_UELPlayerNumberHUD_InitializePlayerNames_Impl = FName(TEXT("InitializePlayerNames_Impl"));
	void UELPlayerNumberHUD::InitializePlayerNames_Impl()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELPlayerNumberHUD_InitializePlayerNames_Impl),NULL);
	}
	void UELPlayerNumberHUD::StaticRegisterNativesUELPlayerNumberHUD()
	{
		UClass* Class = UELPlayerNumberHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTopVisibility_N", &UELPlayerNumberHUD::execGetTopVisibility_N },
			{ "ResetShowTimer_N", &UELPlayerNumberHUD::execResetShowTimer_N },
			{ "SetTagIcons", &UELPlayerNumberHUD::execSetTagIcons },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELPlayerNumberHUD_GetTopVisibility_N_Statics
	{
		struct ELPlayerNumberHUD_eventGetTopVisibility_N_Parms
		{
			ESlateVisibility ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELPlayerNumberHUD_GetTopVisibility_N_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELPlayerNumberHUD_GetTopVisibility_N_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerNumberHUD_eventGetTopVisibility_N_Parms, ReturnValue), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlayerNumberHUD_GetTopVisibility_N_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerNumberHUD_GetTopVisibility_N_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerNumberHUD_GetTopVisibility_N_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerNumberHUD_GetTopVisibility_N_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlayerNumberHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlayerNumberHUD_GetTopVisibility_N_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlayerNumberHUD, nullptr, "GetTopVisibility_N", nullptr, nullptr, sizeof(ELPlayerNumberHUD_eventGetTopVisibility_N_Parms), Z_Construct_UFunction_UELPlayerNumberHUD_GetTopVisibility_N_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerNumberHUD_GetTopVisibility_N_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerNumberHUD_GetTopVisibility_N_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerNumberHUD_GetTopVisibility_N_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlayerNumberHUD_GetTopVisibility_N()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlayerNumberHUD_GetTopVisibility_N_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlayerNumberHUD_InitializePlayerNames_Impl_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerNumberHUD_InitializePlayerNames_Impl_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlayerNumberHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlayerNumberHUD_InitializePlayerNames_Impl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlayerNumberHUD, nullptr, "InitializePlayerNames_Impl", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerNumberHUD_InitializePlayerNames_Impl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerNumberHUD_InitializePlayerNames_Impl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlayerNumberHUD_InitializePlayerNames_Impl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlayerNumberHUD_InitializePlayerNames_Impl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlayerNumberHUD_ResetShowTimer_N_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerNumberHUD_ResetShowTimer_N_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlayerNumberHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlayerNumberHUD_ResetShowTimer_N_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlayerNumberHUD, nullptr, "ResetShowTimer_N", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerNumberHUD_ResetShowTimer_N_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerNumberHUD_ResetShowTimer_N_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlayerNumberHUD_ResetShowTimer_N()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlayerNumberHUD_ResetShowTimer_N_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlayerNumberHUD_SetTagIcons_Statics
	{
		struct ELPlayerNumberHUD_eventSetTagIcons_Parms
		{
			TArray<UELTagMatchIconBase*> InTagIcons;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InTagIcons_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTagIcons_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InTagIcons;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELPlayerNumberHUD_SetTagIcons_Statics::NewProp_InTagIcons_Inner = { "InTagIcons", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UELTagMatchIconBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerNumberHUD_SetTagIcons_Statics::NewProp_InTagIcons_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELPlayerNumberHUD_SetTagIcons_Statics::NewProp_InTagIcons = { "InTagIcons", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerNumberHUD_eventSetTagIcons_Parms, InTagIcons), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerNumberHUD_SetTagIcons_Statics::NewProp_InTagIcons_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerNumberHUD_SetTagIcons_Statics::NewProp_InTagIcons_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlayerNumberHUD_SetTagIcons_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerNumberHUD_SetTagIcons_Statics::NewProp_InTagIcons_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerNumberHUD_SetTagIcons_Statics::NewProp_InTagIcons,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerNumberHUD_SetTagIcons_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlayerNumberHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlayerNumberHUD_SetTagIcons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlayerNumberHUD, nullptr, "SetTagIcons", nullptr, nullptr, sizeof(ELPlayerNumberHUD_eventSetTagIcons_Parms), Z_Construct_UFunction_UELPlayerNumberHUD_SetTagIcons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerNumberHUD_SetTagIcons_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerNumberHUD_SetTagIcons_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerNumberHUD_SetTagIcons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlayerNumberHUD_SetTagIcons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlayerNumberHUD_SetTagIcons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELPlayerNumberHUD_NoRegister()
	{
		return UELPlayerNumberHUD::StaticClass();
	}
	struct Z_Construct_UClass_UELPlayerNumberHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInitialized_N_MetaData[];
#endif
		static void NewProp_bInitialized_N_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInitialized_N;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHideControllerID_N_MetaData[];
#endif
		static void NewProp_bHideControllerID_N_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideControllerID_N;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowTimer_N_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShowTimer_N;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GamerTagList_N_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GamerTagList_N_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GamerTagList_N_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GamerTagList_N;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GamerTagHideAnimations_N_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GamerTagHideAnimations_N_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GamerTagHideAnimations_N;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControllerIDList_N_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControllerIDList_N_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControllerIDList_N_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ControllerIDList_N;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControllerIDHideAnimations_N_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControllerIDHideAnimations_N_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ControllerIDHideAnimations_N;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELPlayerNumberHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELPlayerNumberHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELPlayerNumberHUD_GetTopVisibility_N, "GetTopVisibility_N" }, // 1759833965
		{ &Z_Construct_UFunction_UELPlayerNumberHUD_InitializePlayerNames_Impl, "InitializePlayerNames_Impl" }, // 3501597667
		{ &Z_Construct_UFunction_UELPlayerNumberHUD_ResetShowTimer_N, "ResetShowTimer_N" }, // 3737695250
		{ &Z_Construct_UFunction_UELPlayerNumberHUD_SetTagIcons, "SetTagIcons" }, // 867515504
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELPlayerNumberHUD_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELPlayerNumberHUD.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELPlayerNumberHUD.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELPlayerNumberHUD_Statics::NewProp_bInitialized_N_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELPlayerNumberHUD" },
		{ "ModuleRelativePath", "Public/ELPlayerNumberHUD.h" },
	};
#endif
	void Z_Construct_UClass_UELPlayerNumberHUD_Statics::NewProp_bInitialized_N_SetBit(void* Obj)
	{
		((UELPlayerNumberHUD*)Obj)->bInitialized_N = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELPlayerNumberHUD_Statics::NewProp_bInitialized_N = { "bInitialized_N", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELPlayerNumberHUD), &Z_Construct_UClass_UELPlayerNumberHUD_Statics::NewProp_bInitialized_N_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELPlayerNumberHUD_Statics::NewProp_bInitialized_N_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELPlayerNumberHUD_Statics::NewProp_bInitialized_N_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELPlayerNumberHUD_Statics::NewProp_bHideControllerID_N_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELPlayerNumberHUD" },
		{ "ModuleRelativePath", "Public/ELPlayerNumberHUD.h" },
	};
#endif
	void Z_Construct_UClass_UELPlayerNumberHUD_Statics::NewProp_bHideControllerID_N_SetBit(void* Obj)
	{
		((UELPlayerNumberHUD*)Obj)->bHideControllerID_N = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELPlayerNumberHUD_Statics::NewProp_bHideControllerID_N = { "bHideControllerID_N", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELPlayerNumberHUD), &Z_Construct_UClass_UELPlayerNumberHUD_Statics::NewProp_bHideControllerID_N_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELPlayerNumberHUD_Statics::NewProp_bHideControllerID_N_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELPlayerNumberHUD_Statics::NewProp_bHideControllerID_N_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELPlayerNumberHUD_Statics::NewProp_ShowTimer_N_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELPlayerNumberHUD" },
		{ "ModuleRelativePath", "Public/ELPlayerNumberHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELPlayerNumberHUD_Statics::NewProp_ShowTimer_N = { "ShowTimer_N", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELPlayerNumberHUD, ShowTimer_N), METADATA_PARAMS(Z_Construct_UClass_UELPlayerNumberHUD_Statics::NewProp_ShowTimer_N_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELPlayerNumberHUD_Statics::NewProp_ShowTimer_N_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELPlayerNumberHUD_Statics::NewProp_GamerTagList_N_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELPlayerNumberHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELPlayerNumberHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELPlayerNumberHUD_Statics::NewProp_GamerTagList_N_Inner = { "GamerTagList_N", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UELGeneralFontBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELPlayerNumberHUD_Statics::NewProp_GamerTagList_N_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELPlayerNumberHUD_Statics::NewProp_GamerTagList_N_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELPlayerNumberHUD_Statics::NewProp_GamerTagList_N_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELPlayerNumberHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELPlayerNumberHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELPlayerNumberHUD_Statics::NewProp_GamerTagList_N = { "GamerTagList_N", nullptr, (EPropertyFlags)0x002008800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELPlayerNumberHUD, GamerTagList_N), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELPlayerNumberHUD_Statics::NewProp_GamerTagList_N_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELPlayerNumberHUD_Statics::NewProp_GamerTagList_N_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELPlayerNumberHUD_Statics::NewProp_GamerTagHideAnimations_N_Inner = { "GamerTagHideAnimations_N", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELPlayerNumberHUD_Statics::NewProp_GamerTagHideAnimations_N_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELPlayerNumberHUD" },
		{ "ModuleRelativePath", "Public/ELPlayerNumberHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELPlayerNumberHUD_Statics::NewProp_GamerTagHideAnimations_N = { "GamerTagHideAnimations_N", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELPlayerNumberHUD, GamerTagHideAnimations_N), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELPlayerNumberHUD_Statics::NewProp_GamerTagHideAnimations_N_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELPlayerNumberHUD_Statics::NewProp_GamerTagHideAnimations_N_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELPlayerNumberHUD_Statics::NewProp_ControllerIDList_N_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELPlayerNumberHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELPlayerNumberHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELPlayerNumberHUD_Statics::NewProp_ControllerIDList_N_Inner = { "ControllerIDList_N", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UELGeneralFontBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELPlayerNumberHUD_Statics::NewProp_ControllerIDList_N_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELPlayerNumberHUD_Statics::NewProp_ControllerIDList_N_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELPlayerNumberHUD_Statics::NewProp_ControllerIDList_N_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELPlayerNumberHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELPlayerNumberHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELPlayerNumberHUD_Statics::NewProp_ControllerIDList_N = { "ControllerIDList_N", nullptr, (EPropertyFlags)0x002008800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELPlayerNumberHUD, ControllerIDList_N), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELPlayerNumberHUD_Statics::NewProp_ControllerIDList_N_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELPlayerNumberHUD_Statics::NewProp_ControllerIDList_N_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELPlayerNumberHUD_Statics::NewProp_ControllerIDHideAnimations_N_Inner = { "ControllerIDHideAnimations_N", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELPlayerNumberHUD_Statics::NewProp_ControllerIDHideAnimations_N_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELPlayerNumberHUD" },
		{ "ModuleRelativePath", "Public/ELPlayerNumberHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELPlayerNumberHUD_Statics::NewProp_ControllerIDHideAnimations_N = { "ControllerIDHideAnimations_N", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELPlayerNumberHUD, ControllerIDHideAnimations_N), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELPlayerNumberHUD_Statics::NewProp_ControllerIDHideAnimations_N_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELPlayerNumberHUD_Statics::NewProp_ControllerIDHideAnimations_N_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELPlayerNumberHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELPlayerNumberHUD_Statics::NewProp_bInitialized_N,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELPlayerNumberHUD_Statics::NewProp_bHideControllerID_N,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELPlayerNumberHUD_Statics::NewProp_ShowTimer_N,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELPlayerNumberHUD_Statics::NewProp_GamerTagList_N_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELPlayerNumberHUD_Statics::NewProp_GamerTagList_N,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELPlayerNumberHUD_Statics::NewProp_GamerTagHideAnimations_N_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELPlayerNumberHUD_Statics::NewProp_GamerTagHideAnimations_N,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELPlayerNumberHUD_Statics::NewProp_ControllerIDList_N_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELPlayerNumberHUD_Statics::NewProp_ControllerIDList_N,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELPlayerNumberHUD_Statics::NewProp_ControllerIDHideAnimations_N_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELPlayerNumberHUD_Statics::NewProp_ControllerIDHideAnimations_N,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELPlayerNumberHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELPlayerNumberHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELPlayerNumberHUD_Statics::ClassParams = {
		&UELPlayerNumberHUD::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELPlayerNumberHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELPlayerNumberHUD_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELPlayerNumberHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELPlayerNumberHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELPlayerNumberHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELPlayerNumberHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELPlayerNumberHUD, 2712462602);
	template<> ABP_200508_API UClass* StaticClass<UELPlayerNumberHUD>()
	{
		return UELPlayerNumberHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELPlayerNumberHUD(Z_Construct_UClass_UELPlayerNumberHUD, &UELPlayerNumberHUD::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELPlayerNumberHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELPlayerNumberHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
