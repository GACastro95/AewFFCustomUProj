// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareMovieScenes/Public/MovieSceneManaTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneManaTrack() {}
// Cross Module References
	CRIWAREMOVIESCENES_API UClass* Z_Construct_UClass_UMovieSceneManaTrack_NoRegister();
	CRIWAREMOVIESCENES_API UClass* Z_Construct_UClass_UMovieSceneManaTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNameableTrack();
	UPackage* Z_Construct_UPackage__Script_CriWareMovieScenes();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
	CRIWAREMOVIESCENES_API UClass* Z_Construct_UClass_UMovieSceneAtomTrack_NoRegister();
// End Cross Module References
	void UMovieSceneManaTrack::StaticRegisterNativesUMovieSceneManaTrack()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneManaTrack_NoRegister()
	{
		return UMovieSceneManaTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneManaTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManaSections_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ManaSections_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManaSections_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ManaSections;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SyncedAtomTrack_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SyncedAtomTrack;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneManaTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneNameableTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareMovieScenes,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneManaTrack_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MovieSceneManaTrack.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneManaTrack.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneManaTrack_Statics::NewProp_ManaSections_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneManaTrack" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneManaTrack.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneManaTrack_Statics::NewProp_ManaSections_Inner = { "ManaSections", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneManaTrack_Statics::NewProp_ManaSections_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneManaTrack_Statics::NewProp_ManaSections_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneManaTrack_Statics::NewProp_ManaSections_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneManaTrack" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneManaTrack.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneManaTrack_Statics::NewProp_ManaSections = { "ManaSections", nullptr, (EPropertyFlags)0x004000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneManaTrack, ManaSections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneManaTrack_Statics::NewProp_ManaSections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneManaTrack_Statics::NewProp_ManaSections_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneManaTrack_Statics::NewProp_SyncedAtomTrack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneManaTrack" },
		{ "ModuleRelativePath", "Public/MovieSceneManaTrack.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UMovieSceneManaTrack_Statics::NewProp_SyncedAtomTrack = { "SyncedAtomTrack", nullptr, (EPropertyFlags)0x004400000008000d, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneManaTrack, SyncedAtomTrack), Z_Construct_UClass_UMovieSceneAtomTrack_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneManaTrack_Statics::NewProp_SyncedAtomTrack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneManaTrack_Statics::NewProp_SyncedAtomTrack_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneManaTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneManaTrack_Statics::NewProp_ManaSections_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneManaTrack_Statics::NewProp_ManaSections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneManaTrack_Statics::NewProp_SyncedAtomTrack,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneManaTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneManaTrack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneManaTrack_Statics::ClassParams = {
		&UMovieSceneManaTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneManaTrack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneManaTrack_Statics::PropPointers),
		0,
		0x00A800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneManaTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneManaTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneManaTrack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneManaTrack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneManaTrack, 4166654687);
	template<> CRIWAREMOVIESCENES_API UClass* StaticClass<UMovieSceneManaTrack>()
	{
		return UMovieSceneManaTrack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneManaTrack(Z_Construct_UClass_UMovieSceneManaTrack, &UMovieSceneManaTrack::StaticClass, TEXT("/Script/CriWareMovieScenes"), TEXT("UMovieSceneManaTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneManaTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
