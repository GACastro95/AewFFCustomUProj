// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELBattleRoyalePlayerSpawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELBattleRoyalePlayerSpawn() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELBattleRoyalePlayerSpawn_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELBattleRoyalePlayerSpawn();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static FName NAME_AELBattleRoyalePlayerSpawn_FindPlayer = FName(TEXT("FindPlayer"));
	bool AELBattleRoyalePlayerSpawn::FindPlayer() const
	{
		ELBattleRoyalePlayerSpawn_eventFindPlayer_Parms Parms;
		const_cast<AELBattleRoyalePlayerSpawn*>(this)->ProcessEvent(FindFunctionChecked(NAME_AELBattleRoyalePlayerSpawn_FindPlayer),&Parms);
		return !!Parms.ReturnValue;
	}
	void AELBattleRoyalePlayerSpawn::StaticRegisterNativesAELBattleRoyalePlayerSpawn()
	{
	}
	struct Z_Construct_UFunction_AELBattleRoyalePlayerSpawn_FindPlayer_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELBattleRoyalePlayerSpawn_FindPlayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELBattleRoyalePlayerSpawn_eventFindPlayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELBattleRoyalePlayerSpawn_FindPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELBattleRoyalePlayerSpawn_eventFindPlayer_Parms), &Z_Construct_UFunction_AELBattleRoyalePlayerSpawn_FindPlayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELBattleRoyalePlayerSpawn_FindPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELBattleRoyalePlayerSpawn_FindPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELBattleRoyalePlayerSpawn_FindPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELBattleRoyalePlayerSpawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELBattleRoyalePlayerSpawn_FindPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELBattleRoyalePlayerSpawn, nullptr, "FindPlayer", nullptr, nullptr, sizeof(ELBattleRoyalePlayerSpawn_eventFindPlayer_Parms), Z_Construct_UFunction_AELBattleRoyalePlayerSpawn_FindPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELBattleRoyalePlayerSpawn_FindPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELBattleRoyalePlayerSpawn_FindPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELBattleRoyalePlayerSpawn_FindPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELBattleRoyalePlayerSpawn_FindPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELBattleRoyalePlayerSpawn_FindPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELBattleRoyalePlayerSpawn_NoRegister()
	{
		return AELBattleRoyalePlayerSpawn::StaticClass();
	}
	struct Z_Construct_UClass_AELBattleRoyalePlayerSpawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELBattleRoyalePlayerSpawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELBattleRoyalePlayerSpawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELBattleRoyalePlayerSpawn_FindPlayer, "FindPlayer" }, // 2632271548
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELBattleRoyalePlayerSpawn_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELBattleRoyalePlayerSpawn.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELBattleRoyalePlayerSpawn.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELBattleRoyalePlayerSpawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELBattleRoyalePlayerSpawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELBattleRoyalePlayerSpawn_Statics::ClassParams = {
		&AELBattleRoyalePlayerSpawn::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELBattleRoyalePlayerSpawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELBattleRoyalePlayerSpawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELBattleRoyalePlayerSpawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELBattleRoyalePlayerSpawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELBattleRoyalePlayerSpawn, 750879916);
	template<> ABP_200508_API UClass* StaticClass<AELBattleRoyalePlayerSpawn>()
	{
		return AELBattleRoyalePlayerSpawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELBattleRoyalePlayerSpawn(Z_Construct_UClass_AELBattleRoyalePlayerSpawn, &AELBattleRoyalePlayerSpawn::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELBattleRoyalePlayerSpawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELBattleRoyalePlayerSpawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
