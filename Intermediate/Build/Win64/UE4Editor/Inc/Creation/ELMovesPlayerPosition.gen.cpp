// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/ELMovesPlayerPosition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMovesPlayerPosition() {}
// Cross Module References
	CREATION_API UClass* Z_Construct_UClass_AELMovesPlayerPosition_NoRegister();
	CREATION_API UClass* Z_Construct_UClass_AELMovesPlayerPosition();
	ENGINE_API UClass* Z_Construct_UClass_APlayerStart();
	UPackage* Z_Construct_UPackage__Script_Creation();
	CREATION_API UEnum* Z_Construct_UEnum_Creation_EMovesCategory();
	CREATION_API UEnum* Z_Construct_UEnum_Creation_EMovesState();
// End Cross Module References
	void AELMovesPlayerPosition::StaticRegisterNativesAELMovesPlayerPosition()
	{
	}
	UClass* Z_Construct_UClass_AELMovesPlayerPosition_NoRegister()
	{
		return AELMovesPlayerPosition::StaticClass();
	}
	struct Z_Construct_UClass_AELMovesPlayerPosition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Category_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Category_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Category;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MovesState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovesState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MovesState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELMovesPlayerPosition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerStart,
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELMovesPlayerPosition_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Collision Lighting LightColor Force" },
		{ "IncludePath", "ELMovesPlayerPosition.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELMovesPlayerPosition.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AELMovesPlayerPosition_Statics::NewProp_Category_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AELMovesPlayerPosition_Statics::NewProp_Category_Inner = { "Category", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Creation_EMovesCategory, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELMovesPlayerPosition_Statics::NewProp_Category_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesPlayerPosition" },
		{ "ModuleRelativePath", "Public/ELMovesPlayerPosition.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELMovesPlayerPosition_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELMovesPlayerPosition, Category), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELMovesPlayerPosition_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELMovesPlayerPosition_Statics::NewProp_Category_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AELMovesPlayerPosition_Statics::NewProp_MovesState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELMovesPlayerPosition_Statics::NewProp_MovesState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesPlayerPosition" },
		{ "ModuleRelativePath", "Public/ELMovesPlayerPosition.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AELMovesPlayerPosition_Statics::NewProp_MovesState = { "MovesState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELMovesPlayerPosition, MovesState), Z_Construct_UEnum_Creation_EMovesState, METADATA_PARAMS(Z_Construct_UClass_AELMovesPlayerPosition_Statics::NewProp_MovesState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELMovesPlayerPosition_Statics::NewProp_MovesState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELMovesPlayerPosition_Statics::NewProp_PlayerIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesPlayerPosition" },
		{ "ModuleRelativePath", "Public/ELMovesPlayerPosition.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELMovesPlayerPosition_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELMovesPlayerPosition, PlayerIndex), METADATA_PARAMS(Z_Construct_UClass_AELMovesPlayerPosition_Statics::NewProp_PlayerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELMovesPlayerPosition_Statics::NewProp_PlayerIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELMovesPlayerPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELMovesPlayerPosition_Statics::NewProp_Category_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELMovesPlayerPosition_Statics::NewProp_Category_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELMovesPlayerPosition_Statics::NewProp_Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELMovesPlayerPosition_Statics::NewProp_MovesState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELMovesPlayerPosition_Statics::NewProp_MovesState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELMovesPlayerPosition_Statics::NewProp_PlayerIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELMovesPlayerPosition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELMovesPlayerPosition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELMovesPlayerPosition_Statics::ClassParams = {
		&AELMovesPlayerPosition::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AELMovesPlayerPosition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AELMovesPlayerPosition_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELMovesPlayerPosition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELMovesPlayerPosition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELMovesPlayerPosition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELMovesPlayerPosition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELMovesPlayerPosition, 996666223);
	template<> CREATION_API UClass* StaticClass<AELMovesPlayerPosition>()
	{
		return AELMovesPlayerPosition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELMovesPlayerPosition(Z_Construct_UClass_AELMovesPlayerPosition, &AELMovesPlayerPosition::StaticClass, TEXT("/Script/Creation"), TEXT("AELMovesPlayerPosition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELMovesPlayerPosition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
