// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ELHoldComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELHoldComponent() {}
// Cross Module References
	ELITE_GAME_API UClass* Z_Construct_UClass_UELHoldComponent_NoRegister();
	ELITE_GAME_API UClass* Z_Construct_UClass_UELHoldComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
	void UELHoldComponent::StaticRegisterNativesUELHoldComponent()
	{
	}
	UClass* Z_Construct_UClass_UELHoldComponent_NoRegister()
	{
		return UELHoldComponent::StaticClass();
	}
	struct Z_Construct_UClass_UELHoldComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanPutOnHand_MetaData[];
#endif
		static void NewProp_bCanPutOnHand_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanPutOnHand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanPutOnFoot_MetaData[];
#endif
		static void NewProp_bCanPutOnFoot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanPutOnFoot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELHoldComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELHoldComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ELHoldComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELHoldComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELHoldComponent_Statics::NewProp_bCanPutOnHand_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELHoldComponent" },
		{ "ModuleRelativePath", "Public/ELHoldComponent.h" },
	};
#endif
	void Z_Construct_UClass_UELHoldComponent_Statics::NewProp_bCanPutOnHand_SetBit(void* Obj)
	{
		((UELHoldComponent*)Obj)->bCanPutOnHand = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELHoldComponent_Statics::NewProp_bCanPutOnHand = { "bCanPutOnHand", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELHoldComponent), &Z_Construct_UClass_UELHoldComponent_Statics::NewProp_bCanPutOnHand_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELHoldComponent_Statics::NewProp_bCanPutOnHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELHoldComponent_Statics::NewProp_bCanPutOnHand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELHoldComponent_Statics::NewProp_bCanPutOnFoot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELHoldComponent" },
		{ "ModuleRelativePath", "Public/ELHoldComponent.h" },
	};
#endif
	void Z_Construct_UClass_UELHoldComponent_Statics::NewProp_bCanPutOnFoot_SetBit(void* Obj)
	{
		((UELHoldComponent*)Obj)->bCanPutOnFoot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELHoldComponent_Statics::NewProp_bCanPutOnFoot = { "bCanPutOnFoot", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELHoldComponent), &Z_Construct_UClass_UELHoldComponent_Statics::NewProp_bCanPutOnFoot_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELHoldComponent_Statics::NewProp_bCanPutOnFoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELHoldComponent_Statics::NewProp_bCanPutOnFoot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELHoldComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELHoldComponent_Statics::NewProp_bCanPutOnHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELHoldComponent_Statics::NewProp_bCanPutOnFoot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELHoldComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELHoldComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELHoldComponent_Statics::ClassParams = {
		&UELHoldComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UELHoldComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UELHoldComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UELHoldComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELHoldComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELHoldComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELHoldComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELHoldComponent, 732490337);
	template<> ELITE_GAME_API UClass* StaticClass<UELHoldComponent>()
	{
		return UELHoldComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELHoldComponent(Z_Construct_UClass_UELHoldComponent, &UELHoldComponent::StaticClass, TEXT("/Script/ELITE_Game"), TEXT("UELHoldComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELHoldComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
