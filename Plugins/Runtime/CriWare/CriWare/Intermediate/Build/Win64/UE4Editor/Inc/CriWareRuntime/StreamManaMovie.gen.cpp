// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/StreamManaMovie.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStreamManaMovie() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UStreamManaMovie_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UStreamManaMovie();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaMovie();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	void UStreamManaMovie::StaticRegisterNativesUStreamManaMovie()
	{
	}
	UClass* Z_Construct_UClass_UStreamManaMovie_NoRegister()
	{
		return UStreamManaMovie::StaticClass();
	}
	struct Z_Construct_UClass_UStreamManaMovie_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreamUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StreamUrl;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStreamManaMovie_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UManaMovie,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamManaMovie_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "StreamManaMovie.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/StreamManaMovie.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamManaMovie_Statics::NewProp_StreamUrl_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StreamManaMovie" },
		{ "ModuleRelativePath", "Public/StreamManaMovie.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UStreamManaMovie_Statics::NewProp_StreamUrl = { "StreamUrl", nullptr, (EPropertyFlags)0x0010010000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStreamManaMovie, StreamUrl), METADATA_PARAMS(Z_Construct_UClass_UStreamManaMovie_Statics::NewProp_StreamUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamManaMovie_Statics::NewProp_StreamUrl_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStreamManaMovie_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamManaMovie_Statics::NewProp_StreamUrl,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStreamManaMovie_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStreamManaMovie>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStreamManaMovie_Statics::ClassParams = {
		&UStreamManaMovie::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStreamManaMovie_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStreamManaMovie_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStreamManaMovie_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamManaMovie_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStreamManaMovie()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStreamManaMovie_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStreamManaMovie, 2933295562);
	template<> CRIWARERUNTIME_API UClass* StaticClass<UStreamManaMovie>()
	{
		return UStreamManaMovie::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStreamManaMovie(Z_Construct_UClass_UStreamManaMovie, &UStreamManaMovie::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UStreamManaMovie"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStreamManaMovie);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
