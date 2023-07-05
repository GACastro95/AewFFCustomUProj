// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/RA_SlotMatchRule.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRA_SlotMatchRule() {}
// Cross Module References
	ELITE_GAME_API UClass* Z_Construct_UClass_URA_SlotMatchRule_NoRegister();
	ELITE_GAME_API UClass* Z_Construct_UClass_URA_SlotMatchRule();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ERA_Slot_MatchRule();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(URA_SlotMatchRule::execGetSlotMatchRuleSoundAtom)
	{
		P_GET_ENUM(ERA_Slot_MatchRule,Z_Param__eRA_Slot_MatchRule);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USoundAtomCue**)Z_Param__Result=URA_SlotMatchRule::GetSlotMatchRuleSoundAtom(ERA_Slot_MatchRule(Z_Param__eRA_Slot_MatchRule));
		P_NATIVE_END;
	}
	void URA_SlotMatchRule::StaticRegisterNativesURA_SlotMatchRule()
	{
		UClass* Class = URA_SlotMatchRule::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSlotMatchRuleSoundAtom", &URA_SlotMatchRule::execGetSlotMatchRuleSoundAtom },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URA_SlotMatchRule_GetSlotMatchRuleSoundAtom_Statics
	{
		struct RA_SlotMatchRule_eventGetSlotMatchRuleSoundAtom_Parms
		{
			ERA_Slot_MatchRule _eRA_Slot_MatchRule;
			USoundAtomCue* ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__eRA_Slot_MatchRule_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__eRA_Slot_MatchRule;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URA_SlotMatchRule_GetSlotMatchRuleSoundAtom_Statics::NewProp__eRA_Slot_MatchRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URA_SlotMatchRule_GetSlotMatchRuleSoundAtom_Statics::NewProp__eRA_Slot_MatchRule = { "_eRA_Slot_MatchRule", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RA_SlotMatchRule_eventGetSlotMatchRuleSoundAtom_Parms, _eRA_Slot_MatchRule), Z_Construct_UEnum_ELITE_Game_ERA_Slot_MatchRule, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URA_SlotMatchRule_GetSlotMatchRuleSoundAtom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RA_SlotMatchRule_eventGetSlotMatchRuleSoundAtom_Parms, ReturnValue), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URA_SlotMatchRule_GetSlotMatchRuleSoundAtom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URA_SlotMatchRule_GetSlotMatchRuleSoundAtom_Statics::NewProp__eRA_Slot_MatchRule_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URA_SlotMatchRule_GetSlotMatchRuleSoundAtom_Statics::NewProp__eRA_Slot_MatchRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URA_SlotMatchRule_GetSlotMatchRuleSoundAtom_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URA_SlotMatchRule_GetSlotMatchRuleSoundAtom_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RA_SlotMatchRule.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URA_SlotMatchRule_GetSlotMatchRuleSoundAtom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URA_SlotMatchRule, nullptr, "GetSlotMatchRuleSoundAtom", nullptr, nullptr, sizeof(RA_SlotMatchRule_eventGetSlotMatchRuleSoundAtom_Parms), Z_Construct_UFunction_URA_SlotMatchRule_GetSlotMatchRuleSoundAtom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URA_SlotMatchRule_GetSlotMatchRuleSoundAtom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URA_SlotMatchRule_GetSlotMatchRuleSoundAtom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URA_SlotMatchRule_GetSlotMatchRuleSoundAtom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URA_SlotMatchRule_GetSlotMatchRuleSoundAtom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URA_SlotMatchRule_GetSlotMatchRuleSoundAtom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URA_SlotMatchRule_NoRegister()
	{
		return URA_SlotMatchRule::StaticClass();
	}
	struct Z_Construct_UClass_URA_SlotMatchRule_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URA_SlotMatchRule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URA_SlotMatchRule_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URA_SlotMatchRule_GetSlotMatchRuleSoundAtom, "GetSlotMatchRuleSoundAtom" }, // 2358538669
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URA_SlotMatchRule_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "RA_SlotMatchRule.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RA_SlotMatchRule.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URA_SlotMatchRule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URA_SlotMatchRule>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URA_SlotMatchRule_Statics::ClassParams = {
		&URA_SlotMatchRule::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URA_SlotMatchRule_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URA_SlotMatchRule_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URA_SlotMatchRule()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URA_SlotMatchRule_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URA_SlotMatchRule, 2494009665);
	template<> ELITE_GAME_API UClass* StaticClass<URA_SlotMatchRule>()
	{
		return URA_SlotMatchRule::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URA_SlotMatchRule(Z_Construct_UClass_URA_SlotMatchRule, &URA_SlotMatchRule::StaticClass, TEXT("/Script/ELITE_Game"), TEXT("URA_SlotMatchRule"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URA_SlotMatchRule);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
