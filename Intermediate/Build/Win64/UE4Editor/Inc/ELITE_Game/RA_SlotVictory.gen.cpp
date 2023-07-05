// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/RA_SlotVictory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRA_SlotVictory() {}
// Cross Module References
	ELITE_GAME_API UClass* Z_Construct_UClass_URA_SlotVictory_NoRegister();
	ELITE_GAME_API UClass* Z_Construct_UClass_URA_SlotVictory();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ERA_Slot_CutScene_Type();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(URA_SlotVictory::execGetSlotVictorySoundAtom)
	{
		P_GET_ENUM(ERA_Slot_CutScene_Type,Z_Param__eRA_Slot_CutScene_Type);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USoundAtomCue**)Z_Param__Result=URA_SlotVictory::GetSlotVictorySoundAtom(ERA_Slot_CutScene_Type(Z_Param__eRA_Slot_CutScene_Type));
		P_NATIVE_END;
	}
	void URA_SlotVictory::StaticRegisterNativesURA_SlotVictory()
	{
		UClass* Class = URA_SlotVictory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSlotVictorySoundAtom", &URA_SlotVictory::execGetSlotVictorySoundAtom },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URA_SlotVictory_GetSlotVictorySoundAtom_Statics
	{
		struct RA_SlotVictory_eventGetSlotVictorySoundAtom_Parms
		{
			ERA_Slot_CutScene_Type _eRA_Slot_CutScene_Type;
			USoundAtomCue* ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__eRA_Slot_CutScene_Type_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__eRA_Slot_CutScene_Type;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URA_SlotVictory_GetSlotVictorySoundAtom_Statics::NewProp__eRA_Slot_CutScene_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URA_SlotVictory_GetSlotVictorySoundAtom_Statics::NewProp__eRA_Slot_CutScene_Type = { "_eRA_Slot_CutScene_Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RA_SlotVictory_eventGetSlotVictorySoundAtom_Parms, _eRA_Slot_CutScene_Type), Z_Construct_UEnum_ELITE_Game_ERA_Slot_CutScene_Type, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URA_SlotVictory_GetSlotVictorySoundAtom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RA_SlotVictory_eventGetSlotVictorySoundAtom_Parms, ReturnValue), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URA_SlotVictory_GetSlotVictorySoundAtom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URA_SlotVictory_GetSlotVictorySoundAtom_Statics::NewProp__eRA_Slot_CutScene_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URA_SlotVictory_GetSlotVictorySoundAtom_Statics::NewProp__eRA_Slot_CutScene_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URA_SlotVictory_GetSlotVictorySoundAtom_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URA_SlotVictory_GetSlotVictorySoundAtom_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RA_SlotVictory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URA_SlotVictory_GetSlotVictorySoundAtom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URA_SlotVictory, nullptr, "GetSlotVictorySoundAtom", nullptr, nullptr, sizeof(RA_SlotVictory_eventGetSlotVictorySoundAtom_Parms), Z_Construct_UFunction_URA_SlotVictory_GetSlotVictorySoundAtom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URA_SlotVictory_GetSlotVictorySoundAtom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URA_SlotVictory_GetSlotVictorySoundAtom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URA_SlotVictory_GetSlotVictorySoundAtom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URA_SlotVictory_GetSlotVictorySoundAtom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URA_SlotVictory_GetSlotVictorySoundAtom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URA_SlotVictory_NoRegister()
	{
		return URA_SlotVictory::StaticClass();
	}
	struct Z_Construct_UClass_URA_SlotVictory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URA_SlotVictory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URA_SlotVictory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URA_SlotVictory_GetSlotVictorySoundAtom, "GetSlotVictorySoundAtom" }, // 1611845097
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URA_SlotVictory_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "RA_SlotVictory.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RA_SlotVictory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URA_SlotVictory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URA_SlotVictory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URA_SlotVictory_Statics::ClassParams = {
		&URA_SlotVictory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URA_SlotVictory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URA_SlotVictory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URA_SlotVictory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URA_SlotVictory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URA_SlotVictory, 3462442363);
	template<> ELITE_GAME_API UClass* StaticClass<URA_SlotVictory>()
	{
		return URA_SlotVictory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URA_SlotVictory(Z_Construct_UClass_URA_SlotVictory, &URA_SlotVictory::StaticClass, TEXT("/Script/ELITE_Game"), TEXT("URA_SlotVictory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URA_SlotVictory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
