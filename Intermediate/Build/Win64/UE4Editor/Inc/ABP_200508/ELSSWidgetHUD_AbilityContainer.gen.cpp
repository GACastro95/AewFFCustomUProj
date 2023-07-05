// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSWidgetHUD_AbilityContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSWidgetHUD_AbilityContainer() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EKeyMappingType();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELSSWidgetHUD_AbilityContainer::execApplyWatchGameMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyWatchGameMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_AbilityContainer::execResetAllAbilities)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetAllAbilities();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_AbilityContainer::execSetHoldButtonVisible)
	{
		P_GET_UBOOL(Z_Param_inIsVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHoldButtonVisible(Z_Param_inIsVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_AbilityContainer::execSetVisibleAbility)
	{
		P_GET_UBOOL(Z_Param_inIsVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVisibleAbility(Z_Param_inIsVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_AbilityContainer::execSetVisibleGuide)
	{
		P_GET_UBOOL(Z_Param_inIsVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVisibleGuide(Z_Param_inIsVisible);
		P_NATIVE_END;
	}
	static FName NAME_UELSSWidgetHUD_AbilityContainer_Init = FName(TEXT("Init"));
	void UELSSWidgetHUD_AbilityContainer::Init()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_AbilityContainer_Init),NULL);
	}
	static FName NAME_UELSSWidgetHUD_AbilityContainer_SetKeyConfig = FName(TEXT("SetKeyConfig"));
	void UELSSWidgetHUD_AbilityContainer::SetKeyConfig(EKeyMappingType InKeyMapType)
	{
		ELSSWidgetHUD_AbilityContainer_eventSetKeyConfig_Parms Parms;
		Parms.InKeyMapType=InKeyMapType;
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_AbilityContainer_SetKeyConfig),&Parms);
	}
	void UELSSWidgetHUD_AbilityContainer::StaticRegisterNativesUELSSWidgetHUD_AbilityContainer()
	{
		UClass* Class = UELSSWidgetHUD_AbilityContainer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyWatchGameMode", &UELSSWidgetHUD_AbilityContainer::execApplyWatchGameMode },
			{ "ResetAllAbilities", &UELSSWidgetHUD_AbilityContainer::execResetAllAbilities },
			{ "SetHoldButtonVisible", &UELSSWidgetHUD_AbilityContainer::execSetHoldButtonVisible },
			{ "SetVisibleAbility", &UELSSWidgetHUD_AbilityContainer::execSetVisibleAbility },
			{ "SetVisibleGuide", &UELSSWidgetHUD_AbilityContainer::execSetVisibleGuide },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_ApplyWatchGameMode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_ApplyWatchGameMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AbilityContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_ApplyWatchGameMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer, nullptr, "ApplyWatchGameMode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_ApplyWatchGameMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_ApplyWatchGameMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_ApplyWatchGameMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_ApplyWatchGameMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_Init_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AbilityContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer, nullptr, "Init", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_ResetAllAbilities_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_ResetAllAbilities_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AbilityContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_ResetAllAbilities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer, nullptr, "ResetAllAbilities", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_ResetAllAbilities_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_ResetAllAbilities_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_ResetAllAbilities()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_ResetAllAbilities_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_SetHoldButtonVisible_Statics
	{
		struct ELSSWidgetHUD_AbilityContainer_eventSetHoldButtonVisible_Parms
		{
			bool inIsVisible;
		};
		static void NewProp_inIsVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inIsVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_SetHoldButtonVisible_Statics::NewProp_inIsVisible_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_AbilityContainer_eventSetHoldButtonVisible_Parms*)Obj)->inIsVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_SetHoldButtonVisible_Statics::NewProp_inIsVisible = { "inIsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_AbilityContainer_eventSetHoldButtonVisible_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_SetHoldButtonVisible_Statics::NewProp_inIsVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_SetHoldButtonVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_SetHoldButtonVisible_Statics::NewProp_inIsVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_SetHoldButtonVisible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AbilityContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_SetHoldButtonVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer, nullptr, "SetHoldButtonVisible", nullptr, nullptr, sizeof(ELSSWidgetHUD_AbilityContainer_eventSetHoldButtonVisible_Parms), Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_SetHoldButtonVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_SetHoldButtonVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_SetHoldButtonVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_SetHoldButtonVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_SetHoldButtonVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_SetHoldButtonVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_SetKeyConfig_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InKeyMapType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InKeyMapType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_SetKeyConfig_Statics::NewProp_InKeyMapType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_SetKeyConfig_Statics::NewProp_InKeyMapType = { "InKeyMapType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_AbilityContainer_eventSetKeyConfig_Parms, InKeyMapType), Z_Construct_UEnum_ABP_200508_EKeyMappingType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_SetKeyConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_SetKeyConfig_Statics::NewProp_InKeyMapType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_SetKeyConfig_Statics::NewProp_InKeyMapType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_SetKeyConfig_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AbilityContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_SetKeyConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer, nullptr, "SetKeyConfig", nullptr, nullptr, sizeof(ELSSWidgetHUD_AbilityContainer_eventSetKeyConfig_Parms), Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_SetKeyConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_SetKeyConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_SetKeyConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_SetKeyConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_SetKeyConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_SetKeyConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_SetVisibleAbility_Statics
	{
		struct ELSSWidgetHUD_AbilityContainer_eventSetVisibleAbility_Parms
		{
			bool inIsVisible;
		};
		static void NewProp_inIsVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inIsVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_SetVisibleAbility_Statics::NewProp_inIsVisible_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_AbilityContainer_eventSetVisibleAbility_Parms*)Obj)->inIsVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_SetVisibleAbility_Statics::NewProp_inIsVisible = { "inIsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_AbilityContainer_eventSetVisibleAbility_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_SetVisibleAbility_Statics::NewProp_inIsVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_SetVisibleAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_SetVisibleAbility_Statics::NewProp_inIsVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_SetVisibleAbility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AbilityContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_SetVisibleAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer, nullptr, "SetVisibleAbility", nullptr, nullptr, sizeof(ELSSWidgetHUD_AbilityContainer_eventSetVisibleAbility_Parms), Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_SetVisibleAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_SetVisibleAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_SetVisibleAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_SetVisibleAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_SetVisibleAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_SetVisibleAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_SetVisibleGuide_Statics
	{
		struct ELSSWidgetHUD_AbilityContainer_eventSetVisibleGuide_Parms
		{
			bool inIsVisible;
		};
		static void NewProp_inIsVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inIsVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_SetVisibleGuide_Statics::NewProp_inIsVisible_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_AbilityContainer_eventSetVisibleGuide_Parms*)Obj)->inIsVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_SetVisibleGuide_Statics::NewProp_inIsVisible = { "inIsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_AbilityContainer_eventSetVisibleGuide_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_SetVisibleGuide_Statics::NewProp_inIsVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_SetVisibleGuide_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_SetVisibleGuide_Statics::NewProp_inIsVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_SetVisibleGuide_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AbilityContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_SetVisibleGuide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer, nullptr, "SetVisibleGuide", nullptr, nullptr, sizeof(ELSSWidgetHUD_AbilityContainer_eventSetVisibleGuide_Parms), Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_SetVisibleGuide_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_SetVisibleGuide_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_SetVisibleGuide_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_SetVisibleGuide_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_SetVisibleGuide()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_SetVisibleGuide_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer_NoRegister()
	{
		return UELSSWidgetHUD_AbilityContainer::StaticClass();
	}
	struct Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotWidget_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SlotWidget_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SlotWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FontAbilityWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FontAbilityWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FontHoldWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FontHoldWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilityWidget;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SlotVisible_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotVisible_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SlotVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotVisibleNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SlotVisibleNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsWatchGameMode_MetaData[];
#endif
		static void NewProp_IsWatchGameMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsWatchGameMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanSwichGuideButton_MetaData[];
#endif
		static void NewProp_CanSwichGuideButton_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanSwichGuideButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSSWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_ApplyWatchGameMode, "ApplyWatchGameMode" }, // 1712621116
		{ &Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_Init, "Init" }, // 3460300331
		{ &Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_ResetAllAbilities, "ResetAllAbilities" }, // 2604117084
		{ &Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_SetHoldButtonVisible, "SetHoldButtonVisible" }, // 1997805350
		{ &Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_SetKeyConfig, "SetKeyConfig" }, // 2931163403
		{ &Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_SetVisibleAbility, "SetVisibleAbility" }, // 3373640963
		{ &Z_Construct_UFunction_UELSSWidgetHUD_AbilityContainer_SetVisibleGuide, "SetVisibleGuide" }, // 521722188
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSWidgetHUD_AbilityContainer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AbilityContainer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer_Statics::NewProp_SlotWidget_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AbilityContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AbilityContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer_Statics::NewProp_SlotWidget_Inner = { "SlotWidget", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer_Statics::NewProp_SlotWidget_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer_Statics::NewProp_SlotWidget_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer_Statics::NewProp_SlotWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AbilityContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AbilityContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer_Statics::NewProp_SlotWidget = { "SlotWidget", nullptr, (EPropertyFlags)0x002008800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_AbilityContainer, SlotWidget), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer_Statics::NewProp_SlotWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer_Statics::NewProp_SlotWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer_Statics::NewProp_FontAbilityWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AbilityContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AbilityContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer_Statics::NewProp_FontAbilityWidget = { "FontAbilityWidget", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_AbilityContainer, FontAbilityWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer_Statics::NewProp_FontAbilityWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer_Statics::NewProp_FontAbilityWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer_Statics::NewProp_FontHoldWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AbilityContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AbilityContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer_Statics::NewProp_FontHoldWidget = { "FontHoldWidget", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_AbilityContainer, FontHoldWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer_Statics::NewProp_FontHoldWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer_Statics::NewProp_FontHoldWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer_Statics::NewProp_AbilityWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AbilityContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AbilityContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer_Statics::NewProp_AbilityWidget = { "AbilityWidget", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_AbilityContainer, AbilityWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer_Statics::NewProp_AbilityWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer_Statics::NewProp_AbilityWidget_MetaData)) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer_Statics::NewProp_SlotVisible_Inner = { "SlotVisible", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer_Statics::NewProp_SlotVisible_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AbilityContainer" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AbilityContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer_Statics::NewProp_SlotVisible = { "SlotVisible", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_AbilityContainer, SlotVisible), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer_Statics::NewProp_SlotVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer_Statics::NewProp_SlotVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer_Statics::NewProp_SlotVisibleNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AbilityContainer" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AbilityContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer_Statics::NewProp_SlotVisibleNum = { "SlotVisibleNum", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_AbilityContainer, SlotVisibleNum), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer_Statics::NewProp_SlotVisibleNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer_Statics::NewProp_SlotVisibleNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer_Statics::NewProp_IsWatchGameMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AbilityContainer" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AbilityContainer.h" },
	};
#endif
	void Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer_Statics::NewProp_IsWatchGameMode_SetBit(void* Obj)
	{
		((UELSSWidgetHUD_AbilityContainer*)Obj)->IsWatchGameMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer_Statics::NewProp_IsWatchGameMode = { "IsWatchGameMode", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSWidgetHUD_AbilityContainer), &Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer_Statics::NewProp_IsWatchGameMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer_Statics::NewProp_IsWatchGameMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer_Statics::NewProp_IsWatchGameMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer_Statics::NewProp_CanSwichGuideButton_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_AbilityContainer" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_AbilityContainer.h" },
	};
#endif
	void Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer_Statics::NewProp_CanSwichGuideButton_SetBit(void* Obj)
	{
		((UELSSWidgetHUD_AbilityContainer*)Obj)->CanSwichGuideButton = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer_Statics::NewProp_CanSwichGuideButton = { "CanSwichGuideButton", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSWidgetHUD_AbilityContainer), &Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer_Statics::NewProp_CanSwichGuideButton_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer_Statics::NewProp_CanSwichGuideButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer_Statics::NewProp_CanSwichGuideButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer_Statics::NewProp_SlotWidget_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer_Statics::NewProp_SlotWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer_Statics::NewProp_FontAbilityWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer_Statics::NewProp_FontHoldWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer_Statics::NewProp_AbilityWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer_Statics::NewProp_SlotVisible_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer_Statics::NewProp_SlotVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer_Statics::NewProp_SlotVisibleNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer_Statics::NewProp_IsWatchGameMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer_Statics::NewProp_CanSwichGuideButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSWidgetHUD_AbilityContainer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer_Statics::ClassParams = {
		&UELSSWidgetHUD_AbilityContainer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSWidgetHUD_AbilityContainer, 3856022212);
	template<> ABP_200508_API UClass* StaticClass<UELSSWidgetHUD_AbilityContainer>()
	{
		return UELSSWidgetHUD_AbilityContainer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSWidgetHUD_AbilityContainer(Z_Construct_UClass_UELSSWidgetHUD_AbilityContainer, &UELSSWidgetHUD_AbilityContainer::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSWidgetHUD_AbilityContainer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSWidgetHUD_AbilityContainer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
