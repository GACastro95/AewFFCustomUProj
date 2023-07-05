// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/PlatformManaMovie.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformManaMovie() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UPlatformManaMovie_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UPlatformManaMovie();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaMovie();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaMovie_NoRegister();
// End Cross Module References
	void UPlatformManaMovie::StaticRegisterNativesUPlatformManaMovie()
	{
	}
	UClass* Z_Construct_UClass_UPlatformManaMovie_NoRegister()
	{
		return UPlatformManaMovie::StaticClass();
	}
	struct Z_Construct_UClass_UPlatformManaMovie_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManaMovie_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ManaMovie;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlatformManaMovie_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UManaMovie,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformManaMovie_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PlatformManaMovie.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PlatformManaMovie.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformManaMovie_Statics::NewProp_ManaMovie_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlatformManaMovie" },
		{ "ModuleRelativePath", "Public/PlatformManaMovie.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlatformManaMovie_Statics::NewProp_ManaMovie = { "ManaMovie", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlatformManaMovie, ManaMovie), Z_Construct_UClass_UManaMovie_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlatformManaMovie_Statics::NewProp_ManaMovie_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformManaMovie_Statics::NewProp_ManaMovie_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlatformManaMovie_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformManaMovie_Statics::NewProp_ManaMovie,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlatformManaMovie_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlatformManaMovie>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlatformManaMovie_Statics::ClassParams = {
		&UPlatformManaMovie::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlatformManaMovie_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformManaMovie_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlatformManaMovie_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformManaMovie_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlatformManaMovie()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlatformManaMovie_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlatformManaMovie, 616888240);
	template<> CRIWARERUNTIME_API UClass* StaticClass<UPlatformManaMovie>()
	{
		return UPlatformManaMovie::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlatformManaMovie(Z_Construct_UClass_UPlatformManaMovie, &UPlatformManaMovie::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UPlatformManaMovie"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlatformManaMovie);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
