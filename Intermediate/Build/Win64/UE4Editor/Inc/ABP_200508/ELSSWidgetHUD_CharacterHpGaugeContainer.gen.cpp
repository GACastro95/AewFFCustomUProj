// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSWidgetHUD_CharacterHpGaugeContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSWidgetHUD_CharacterHpGaugeContainer() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_CharacterHpGaugeContainer_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_CharacterHpGaugeContainer();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSCharacterHpType();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_HpGauge_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELSSWidgetHUD_CharacterHpGaugeContainer::execApplyCharacterHpGauge)
	{
		P_GET_OBJECT(AActor,Z_Param_InActor);
		P_GET_PROPERTY(FIntProperty,Z_Param_InNowHp);
		P_GET_PROPERTY(FIntProperty,Z_Param_InIdealHp);
		P_GET_PROPERTY(FIntProperty,Z_Param_inMaxHP);
		P_GET_ENUM(ESSCharacterHpType,Z_Param_InType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ApplyCharacterHpGauge(Z_Param_InActor,Z_Param_InNowHp,Z_Param_InIdealHp,Z_Param_inMaxHP,ESSCharacterHpType(Z_Param_InType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_CharacterHpGaugeContainer::execSetVisibleContainer)
	{
		P_GET_UBOOL(Z_Param_inIsVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVisibleContainer(Z_Param_inIsVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_CharacterHpGaugeContainer::execUpdate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Update(Z_Param_InDeltaTime);
		P_NATIVE_END;
	}
	void UELSSWidgetHUD_CharacterHpGaugeContainer::StaticRegisterNativesUELSSWidgetHUD_CharacterHpGaugeContainer()
	{
		UClass* Class = UELSSWidgetHUD_CharacterHpGaugeContainer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyCharacterHpGauge", &UELSSWidgetHUD_CharacterHpGaugeContainer::execApplyCharacterHpGauge },
			{ "SetVisibleContainer", &UELSSWidgetHUD_CharacterHpGaugeContainer::execSetVisibleContainer },
			{ "Update", &UELSSWidgetHUD_CharacterHpGaugeContainer::execUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_CharacterHpGaugeContainer_ApplyCharacterHpGauge_Statics
	{
		struct ELSSWidgetHUD_CharacterHpGaugeContainer_eventApplyCharacterHpGauge_Parms
		{
			AActor* InActor;
			int32 InNowHp;
			int32 InIdealHp;
			int32 inMaxHP;
			ESSCharacterHpType InType;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InActor;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InNowHp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InIdealHp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inMaxHP;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_CharacterHpGaugeContainer_ApplyCharacterHpGauge_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_CharacterHpGaugeContainer_eventApplyCharacterHpGauge_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_CharacterHpGaugeContainer_ApplyCharacterHpGauge_Statics::NewProp_InNowHp = { "InNowHp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_CharacterHpGaugeContainer_eventApplyCharacterHpGauge_Parms, InNowHp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_CharacterHpGaugeContainer_ApplyCharacterHpGauge_Statics::NewProp_InIdealHp = { "InIdealHp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_CharacterHpGaugeContainer_eventApplyCharacterHpGauge_Parms, InIdealHp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_CharacterHpGaugeContainer_ApplyCharacterHpGauge_Statics::NewProp_inMaxHP = { "inMaxHP", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_CharacterHpGaugeContainer_eventApplyCharacterHpGauge_Parms, inMaxHP), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSWidgetHUD_CharacterHpGaugeContainer_ApplyCharacterHpGauge_Statics::NewProp_InType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_CharacterHpGaugeContainer_ApplyCharacterHpGauge_Statics::NewProp_InType = { "InType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_CharacterHpGaugeContainer_eventApplyCharacterHpGauge_Parms, InType), Z_Construct_UEnum_ABP_200508_ESSCharacterHpType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSWidgetHUD_CharacterHpGaugeContainer_ApplyCharacterHpGauge_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_CharacterHpGaugeContainer_eventApplyCharacterHpGauge_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_CharacterHpGaugeContainer_ApplyCharacterHpGauge_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_CharacterHpGaugeContainer_eventApplyCharacterHpGauge_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_CharacterHpGaugeContainer_ApplyCharacterHpGauge_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_CharacterHpGaugeContainer_ApplyCharacterHpGauge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_CharacterHpGaugeContainer_ApplyCharacterHpGauge_Statics::NewProp_InActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_CharacterHpGaugeContainer_ApplyCharacterHpGauge_Statics::NewProp_InNowHp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_CharacterHpGaugeContainer_ApplyCharacterHpGauge_Statics::NewProp_InIdealHp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_CharacterHpGaugeContainer_ApplyCharacterHpGauge_Statics::NewProp_inMaxHP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_CharacterHpGaugeContainer_ApplyCharacterHpGauge_Statics::NewProp_InType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_CharacterHpGaugeContainer_ApplyCharacterHpGauge_Statics::NewProp_InType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_CharacterHpGaugeContainer_ApplyCharacterHpGauge_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_CharacterHpGaugeContainer_ApplyCharacterHpGauge_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_CharacterHpGaugeContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_CharacterHpGaugeContainer_ApplyCharacterHpGauge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_CharacterHpGaugeContainer, nullptr, "ApplyCharacterHpGauge", nullptr, nullptr, sizeof(ELSSWidgetHUD_CharacterHpGaugeContainer_eventApplyCharacterHpGauge_Parms), Z_Construct_UFunction_UELSSWidgetHUD_CharacterHpGaugeContainer_ApplyCharacterHpGauge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_CharacterHpGaugeContainer_ApplyCharacterHpGauge_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_CharacterHpGaugeContainer_ApplyCharacterHpGauge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_CharacterHpGaugeContainer_ApplyCharacterHpGauge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_CharacterHpGaugeContainer_ApplyCharacterHpGauge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_CharacterHpGaugeContainer_ApplyCharacterHpGauge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_CharacterHpGaugeContainer_SetVisibleContainer_Statics
	{
		struct ELSSWidgetHUD_CharacterHpGaugeContainer_eventSetVisibleContainer_Parms
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
	void Z_Construct_UFunction_UELSSWidgetHUD_CharacterHpGaugeContainer_SetVisibleContainer_Statics::NewProp_inIsVisible_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_CharacterHpGaugeContainer_eventSetVisibleContainer_Parms*)Obj)->inIsVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_CharacterHpGaugeContainer_SetVisibleContainer_Statics::NewProp_inIsVisible = { "inIsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_CharacterHpGaugeContainer_eventSetVisibleContainer_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_CharacterHpGaugeContainer_SetVisibleContainer_Statics::NewProp_inIsVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_CharacterHpGaugeContainer_SetVisibleContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_CharacterHpGaugeContainer_SetVisibleContainer_Statics::NewProp_inIsVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_CharacterHpGaugeContainer_SetVisibleContainer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_CharacterHpGaugeContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_CharacterHpGaugeContainer_SetVisibleContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_CharacterHpGaugeContainer, nullptr, "SetVisibleContainer", nullptr, nullptr, sizeof(ELSSWidgetHUD_CharacterHpGaugeContainer_eventSetVisibleContainer_Parms), Z_Construct_UFunction_UELSSWidgetHUD_CharacterHpGaugeContainer_SetVisibleContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_CharacterHpGaugeContainer_SetVisibleContainer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_CharacterHpGaugeContainer_SetVisibleContainer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_CharacterHpGaugeContainer_SetVisibleContainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_CharacterHpGaugeContainer_SetVisibleContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_CharacterHpGaugeContainer_SetVisibleContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_CharacterHpGaugeContainer_Update_Statics
	{
		struct ELSSWidgetHUD_CharacterHpGaugeContainer_eventUpdate_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_CharacterHpGaugeContainer_Update_Statics::NewProp_InDeltaTime = { "InDeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_CharacterHpGaugeContainer_eventUpdate_Parms, InDeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_CharacterHpGaugeContainer_Update_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_CharacterHpGaugeContainer_Update_Statics::NewProp_InDeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_CharacterHpGaugeContainer_Update_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_CharacterHpGaugeContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_CharacterHpGaugeContainer_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_CharacterHpGaugeContainer, nullptr, "Update", nullptr, nullptr, sizeof(ELSSWidgetHUD_CharacterHpGaugeContainer_eventUpdate_Parms), Z_Construct_UFunction_UELSSWidgetHUD_CharacterHpGaugeContainer_Update_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_CharacterHpGaugeContainer_Update_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_CharacterHpGaugeContainer_Update_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_CharacterHpGaugeContainer_Update_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_CharacterHpGaugeContainer_Update()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_CharacterHpGaugeContainer_Update_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSWidgetHUD_CharacterHpGaugeContainer_NoRegister()
	{
		return UELSSWidgetHUD_CharacterHpGaugeContainer::StaticClass();
	}
	struct Z_Construct_UClass_UELSSWidgetHUD_CharacterHpGaugeContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HpGaugeArray_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HpGaugeArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HpGaugeArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HpGaugeArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShieldGaugeArray_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShieldGaugeArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShieldGaugeArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ShieldGaugeArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSWidgetHUD_CharacterHpGaugeContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSSWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSWidgetHUD_CharacterHpGaugeContainer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSWidgetHUD_CharacterHpGaugeContainer_ApplyCharacterHpGauge, "ApplyCharacterHpGauge" }, // 3825140202
		{ &Z_Construct_UFunction_UELSSWidgetHUD_CharacterHpGaugeContainer_SetVisibleContainer, "SetVisibleContainer" }, // 2065823460
		{ &Z_Construct_UFunction_UELSSWidgetHUD_CharacterHpGaugeContainer_Update, "Update" }, // 3077063314
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_CharacterHpGaugeContainer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSWidgetHUD_CharacterHpGaugeContainer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_CharacterHpGaugeContainer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_CharacterHpGaugeContainer_Statics::NewProp_HpGaugeArray_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_CharacterHpGaugeContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_CharacterHpGaugeContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_CharacterHpGaugeContainer_Statics::NewProp_HpGaugeArray_Inner = { "HpGaugeArray", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UELSSWidgetHUD_HpGauge_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_CharacterHpGaugeContainer_Statics::NewProp_HpGaugeArray_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_CharacterHpGaugeContainer_Statics::NewProp_HpGaugeArray_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_CharacterHpGaugeContainer_Statics::NewProp_HpGaugeArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_CharacterHpGaugeContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_CharacterHpGaugeContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSWidgetHUD_CharacterHpGaugeContainer_Statics::NewProp_HpGaugeArray = { "HpGaugeArray", nullptr, (EPropertyFlags)0x002008800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_CharacterHpGaugeContainer, HpGaugeArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_CharacterHpGaugeContainer_Statics::NewProp_HpGaugeArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_CharacterHpGaugeContainer_Statics::NewProp_HpGaugeArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_CharacterHpGaugeContainer_Statics::NewProp_ShieldGaugeArray_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_CharacterHpGaugeContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_CharacterHpGaugeContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_CharacterHpGaugeContainer_Statics::NewProp_ShieldGaugeArray_Inner = { "ShieldGaugeArray", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_CharacterHpGaugeContainer_Statics::NewProp_ShieldGaugeArray_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_CharacterHpGaugeContainer_Statics::NewProp_ShieldGaugeArray_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_CharacterHpGaugeContainer_Statics::NewProp_ShieldGaugeArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_CharacterHpGaugeContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_CharacterHpGaugeContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSWidgetHUD_CharacterHpGaugeContainer_Statics::NewProp_ShieldGaugeArray = { "ShieldGaugeArray", nullptr, (EPropertyFlags)0x002008800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_CharacterHpGaugeContainer, ShieldGaugeArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_CharacterHpGaugeContainer_Statics::NewProp_ShieldGaugeArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_CharacterHpGaugeContainer_Statics::NewProp_ShieldGaugeArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSWidgetHUD_CharacterHpGaugeContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_CharacterHpGaugeContainer_Statics::NewProp_HpGaugeArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_CharacterHpGaugeContainer_Statics::NewProp_HpGaugeArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_CharacterHpGaugeContainer_Statics::NewProp_ShieldGaugeArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_CharacterHpGaugeContainer_Statics::NewProp_ShieldGaugeArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSWidgetHUD_CharacterHpGaugeContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSWidgetHUD_CharacterHpGaugeContainer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSWidgetHUD_CharacterHpGaugeContainer_Statics::ClassParams = {
		&UELSSWidgetHUD_CharacterHpGaugeContainer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSSWidgetHUD_CharacterHpGaugeContainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_CharacterHpGaugeContainer_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_CharacterHpGaugeContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_CharacterHpGaugeContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSWidgetHUD_CharacterHpGaugeContainer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSWidgetHUD_CharacterHpGaugeContainer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSWidgetHUD_CharacterHpGaugeContainer, 1044451942);
	template<> ABP_200508_API UClass* StaticClass<UELSSWidgetHUD_CharacterHpGaugeContainer>()
	{
		return UELSSWidgetHUD_CharacterHpGaugeContainer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSWidgetHUD_CharacterHpGaugeContainer(Z_Construct_UClass_UELSSWidgetHUD_CharacterHpGaugeContainer, &UELSSWidgetHUD_CharacterHpGaugeContainer::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSWidgetHUD_CharacterHpGaugeContainer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSWidgetHUD_CharacterHpGaugeContainer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
