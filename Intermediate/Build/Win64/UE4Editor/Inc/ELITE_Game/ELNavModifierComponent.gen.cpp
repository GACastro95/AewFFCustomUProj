// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ELNavModifierComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELNavModifierComponent() {}
// Cross Module References
	ELITE_GAME_API UClass* Z_Construct_UClass_UELNavModifierComponent_NoRegister();
	ELITE_GAME_API UClass* Z_Construct_UClass_UELNavModifierComponent();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavModifierComponent();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
// End Cross Module References
	void UELNavModifierComponent::StaticRegisterNativesUELNavModifierComponent()
	{
	}
	UClass* Z_Construct_UClass_UELNavModifierComponent_NoRegister()
	{
		return UELNavModifierComponent::StaticClass();
	}
	struct Z_Construct_UClass_UELNavModifierComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavExtent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NavExtent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffsetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OffsetLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffsetRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OffsetRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELNavModifierComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNavModifierComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELNavModifierComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Activation" },
		{ "IncludePath", "ELNavModifierComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELNavModifierComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELNavModifierComponent_Statics::NewProp_NavExtent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELNavModifierComponent" },
		{ "ModuleRelativePath", "Public/ELNavModifierComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELNavModifierComponent_Statics::NewProp_NavExtent = { "NavExtent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELNavModifierComponent, NavExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UELNavModifierComponent_Statics::NewProp_NavExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELNavModifierComponent_Statics::NewProp_NavExtent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELNavModifierComponent_Statics::NewProp_OffsetLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELNavModifierComponent" },
		{ "ModuleRelativePath", "Public/ELNavModifierComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELNavModifierComponent_Statics::NewProp_OffsetLocation = { "OffsetLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELNavModifierComponent, OffsetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UELNavModifierComponent_Statics::NewProp_OffsetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELNavModifierComponent_Statics::NewProp_OffsetLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELNavModifierComponent_Statics::NewProp_OffsetRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELNavModifierComponent" },
		{ "ModuleRelativePath", "Public/ELNavModifierComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELNavModifierComponent_Statics::NewProp_OffsetRotation = { "OffsetRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELNavModifierComponent, OffsetRotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UClass_UELNavModifierComponent_Statics::NewProp_OffsetRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELNavModifierComponent_Statics::NewProp_OffsetRotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELNavModifierComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELNavModifierComponent_Statics::NewProp_NavExtent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELNavModifierComponent_Statics::NewProp_OffsetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELNavModifierComponent_Statics::NewProp_OffsetRotation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELNavModifierComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELNavModifierComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELNavModifierComponent_Statics::ClassParams = {
		&UELNavModifierComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UELNavModifierComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UELNavModifierComponent_Statics::PropPointers),
		0,
		0x00B000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UELNavModifierComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELNavModifierComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELNavModifierComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELNavModifierComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELNavModifierComponent, 2341742996);
	template<> ELITE_GAME_API UClass* StaticClass<UELNavModifierComponent>()
	{
		return UELNavModifierComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELNavModifierComponent(Z_Construct_UClass_UELNavModifierComponent, &UELNavModifierComponent::StaticClass, TEXT("/Script/ELITE_Game"), TEXT("UELNavModifierComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELNavModifierComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
