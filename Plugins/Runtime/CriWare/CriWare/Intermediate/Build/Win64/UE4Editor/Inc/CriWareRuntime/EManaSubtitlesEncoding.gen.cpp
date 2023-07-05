// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/EManaSubtitlesEncoding.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEManaSubtitlesEncoding() {}
// Cross Module References
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaSubtitlesEncoding();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	static UEnum* EManaSubtitlesEncoding_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_EManaSubtitlesEncoding, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("EManaSubtitlesEncoding"));
		}
		return Singleton;
	}
	template<> CRIWARERUNTIME_API UEnum* StaticEnum<EManaSubtitlesEncoding>()
	{
		return EManaSubtitlesEncoding_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EManaSubtitlesEncoding(EManaSubtitlesEncoding_StaticEnum, TEXT("/Script/CriWareRuntime"), TEXT("EManaSubtitlesEncoding"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CriWareRuntime_EManaSubtitlesEncoding_Hash() { return 16458252U; }
	UEnum* Z_Construct_UEnum_CriWareRuntime_EManaSubtitlesEncoding()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EManaSubtitlesEncoding"), 0, Get_Z_Construct_UEnum_CriWareRuntime_EManaSubtitlesEncoding_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EManaSubtitlesEncoding::Default", (int64)EManaSubtitlesEncoding::Default },
				{ "EManaSubtitlesEncoding::ANSI", (int64)EManaSubtitlesEncoding::ANSI },
				{ "EManaSubtitlesEncoding::Utf8", (int64)EManaSubtitlesEncoding::Utf8 },
				{ "EManaSubtitlesEncoding::Utf16", (int64)EManaSubtitlesEncoding::Utf16 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ANSI.Name", "EManaSubtitlesEncoding::ANSI" },
				{ "BlueprintType", "true" },
				{ "Default.Name", "EManaSubtitlesEncoding::Default" },
				{ "ModuleRelativePath", "Public/EManaSubtitlesEncoding.h" },
				{ "Utf16.Name", "EManaSubtitlesEncoding::Utf16" },
				{ "Utf8.Name", "EManaSubtitlesEncoding::Utf8" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
				nullptr,
				"EManaSubtitlesEncoding",
				"EManaSubtitlesEncoding",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
