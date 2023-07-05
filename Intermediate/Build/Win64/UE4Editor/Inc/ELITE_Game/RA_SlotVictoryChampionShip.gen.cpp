// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/RA_SlotVictoryChampionShip.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRA_SlotVictoryChampionShip() {}
// Cross Module References
	ELITE_GAME_API UClass* Z_Construct_UClass_URA_SlotVictoryChampionShip_NoRegister();
	ELITE_GAME_API UClass* Z_Construct_UClass_URA_SlotVictoryChampionShip();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FRA_SlotVictoryChampionShip_Info();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(URA_SlotVictoryChampionShip::execGetSlotVictoryChampionShipSoundAtom)
	{
		P_GET_STRUCT_REF(FRA_SlotVictoryChampionShip_Info,Z_Param_Out__SlotVictoryChampionShip_Info);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USoundAtomCue**)Z_Param__Result=URA_SlotVictoryChampionShip::GetSlotVictoryChampionShipSoundAtom(Z_Param_Out__SlotVictoryChampionShip_Info);
		P_NATIVE_END;
	}
	void URA_SlotVictoryChampionShip::StaticRegisterNativesURA_SlotVictoryChampionShip()
	{
		UClass* Class = URA_SlotVictoryChampionShip::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSlotVictoryChampionShipSoundAtom", &URA_SlotVictoryChampionShip::execGetSlotVictoryChampionShipSoundAtom },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URA_SlotVictoryChampionShip_GetSlotVictoryChampionShipSoundAtom_Statics
	{
		struct RA_SlotVictoryChampionShip_eventGetSlotVictoryChampionShipSoundAtom_Parms
		{
			FRA_SlotVictoryChampionShip_Info _SlotVictoryChampionShip_Info;
			USoundAtomCue* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__SlotVictoryChampionShip_Info_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__SlotVictoryChampionShip_Info;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URA_SlotVictoryChampionShip_GetSlotVictoryChampionShipSoundAtom_Statics::NewProp__SlotVictoryChampionShip_Info_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URA_SlotVictoryChampionShip_GetSlotVictoryChampionShipSoundAtom_Statics::NewProp__SlotVictoryChampionShip_Info = { "_SlotVictoryChampionShip_Info", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RA_SlotVictoryChampionShip_eventGetSlotVictoryChampionShipSoundAtom_Parms, _SlotVictoryChampionShip_Info), Z_Construct_UScriptStruct_FRA_SlotVictoryChampionShip_Info, METADATA_PARAMS(Z_Construct_UFunction_URA_SlotVictoryChampionShip_GetSlotVictoryChampionShipSoundAtom_Statics::NewProp__SlotVictoryChampionShip_Info_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URA_SlotVictoryChampionShip_GetSlotVictoryChampionShipSoundAtom_Statics::NewProp__SlotVictoryChampionShip_Info_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URA_SlotVictoryChampionShip_GetSlotVictoryChampionShipSoundAtom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RA_SlotVictoryChampionShip_eventGetSlotVictoryChampionShipSoundAtom_Parms, ReturnValue), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URA_SlotVictoryChampionShip_GetSlotVictoryChampionShipSoundAtom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URA_SlotVictoryChampionShip_GetSlotVictoryChampionShipSoundAtom_Statics::NewProp__SlotVictoryChampionShip_Info,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URA_SlotVictoryChampionShip_GetSlotVictoryChampionShipSoundAtom_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URA_SlotVictoryChampionShip_GetSlotVictoryChampionShipSoundAtom_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RA_SlotVictoryChampionShip.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URA_SlotVictoryChampionShip_GetSlotVictoryChampionShipSoundAtom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URA_SlotVictoryChampionShip, nullptr, "GetSlotVictoryChampionShipSoundAtom", nullptr, nullptr, sizeof(RA_SlotVictoryChampionShip_eventGetSlotVictoryChampionShipSoundAtom_Parms), Z_Construct_UFunction_URA_SlotVictoryChampionShip_GetSlotVictoryChampionShipSoundAtom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URA_SlotVictoryChampionShip_GetSlotVictoryChampionShipSoundAtom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URA_SlotVictoryChampionShip_GetSlotVictoryChampionShipSoundAtom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URA_SlotVictoryChampionShip_GetSlotVictoryChampionShipSoundAtom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URA_SlotVictoryChampionShip_GetSlotVictoryChampionShipSoundAtom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URA_SlotVictoryChampionShip_GetSlotVictoryChampionShipSoundAtom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URA_SlotVictoryChampionShip_NoRegister()
	{
		return URA_SlotVictoryChampionShip::StaticClass();
	}
	struct Z_Construct_UClass_URA_SlotVictoryChampionShip_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URA_SlotVictoryChampionShip_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URA_SlotVictoryChampionShip_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URA_SlotVictoryChampionShip_GetSlotVictoryChampionShipSoundAtom, "GetSlotVictoryChampionShipSoundAtom" }, // 1401043210
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URA_SlotVictoryChampionShip_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "RA_SlotVictoryChampionShip.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RA_SlotVictoryChampionShip.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URA_SlotVictoryChampionShip_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URA_SlotVictoryChampionShip>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URA_SlotVictoryChampionShip_Statics::ClassParams = {
		&URA_SlotVictoryChampionShip::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URA_SlotVictoryChampionShip_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URA_SlotVictoryChampionShip_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URA_SlotVictoryChampionShip()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URA_SlotVictoryChampionShip_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URA_SlotVictoryChampionShip, 3997739102);
	template<> ELITE_GAME_API UClass* StaticClass<URA_SlotVictoryChampionShip>()
	{
		return URA_SlotVictoryChampionShip::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URA_SlotVictoryChampionShip(Z_Construct_UClass_URA_SlotVictoryChampionShip, &URA_SlotVictoryChampionShip::StaticClass, TEXT("/Script/ELITE_Game"), TEXT("URA_SlotVictoryChampionShip"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URA_SlotVictoryChampionShip);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
