// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EOutGamePanelEventType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOutGamePanelEventType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EOutGamePanelEventType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EOutGamePanelEventType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EOutGamePanelEventType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EOutGamePanelEventType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EOutGamePanelEventType>()
	{
		return EOutGamePanelEventType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOutGamePanelEventType(EOutGamePanelEventType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EOutGamePanelEventType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EOutGamePanelEventType_Hash() { return 3512138519U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EOutGamePanelEventType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOutGamePanelEventType"), 0, Get_Z_Construct_UEnum_ABP_200508_EOutGamePanelEventType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOutGamePanelEventType::EOutGamePanelEventType_SETUP", (int64)EOutGamePanelEventType::EOutGamePanelEventType_SETUP },
				{ "EOutGamePanelEventType::EOutGamePanelEventType_OPEN", (int64)EOutGamePanelEventType::EOutGamePanelEventType_OPEN },
				{ "EOutGamePanelEventType::EOutGamePanelEventType_CLOSE", (int64)EOutGamePanelEventType::EOutGamePanelEventType_CLOSE },
				{ "EOutGamePanelEventType::EOutGamePanelEventType_PREV", (int64)EOutGamePanelEventType::EOutGamePanelEventType_PREV },
				{ "EOutGamePanelEventType::EOutGamePanelEventType_NEXT", (int64)EOutGamePanelEventType::EOutGamePanelEventType_NEXT },
				{ "EOutGamePanelEventType::EOutGamePanelEventType_MOVIE_PLAY_LOAD", (int64)EOutGamePanelEventType::EOutGamePanelEventType_MOVIE_PLAY_LOAD },
				{ "EOutGamePanelEventType::EOutGamePanelEventType_MOVIE_PLAY_END", (int64)EOutGamePanelEventType::EOutGamePanelEventType_MOVIE_PLAY_END },
				{ "EOutGamePanelEventType::EOutGamePanelEventType_MOVIE_PLAY_FAILED", (int64)EOutGamePanelEventType::EOutGamePanelEventType_MOVIE_PLAY_FAILED },
				{ "EOutGamePanelEventType::EOutGamePanelEventType_MOVIE_PLAY_ALL_END", (int64)EOutGamePanelEventType::EOutGamePanelEventType_MOVIE_PLAY_ALL_END },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EOutGamePanelEventType_CLOSE.Name", "EOutGamePanelEventType::EOutGamePanelEventType_CLOSE" },
				{ "EOutGamePanelEventType_MOVIE_PLAY_ALL_END.Name", "EOutGamePanelEventType::EOutGamePanelEventType_MOVIE_PLAY_ALL_END" },
				{ "EOutGamePanelEventType_MOVIE_PLAY_END.Name", "EOutGamePanelEventType::EOutGamePanelEventType_MOVIE_PLAY_END" },
				{ "EOutGamePanelEventType_MOVIE_PLAY_FAILED.Name", "EOutGamePanelEventType::EOutGamePanelEventType_MOVIE_PLAY_FAILED" },
				{ "EOutGamePanelEventType_MOVIE_PLAY_LOAD.Name", "EOutGamePanelEventType::EOutGamePanelEventType_MOVIE_PLAY_LOAD" },
				{ "EOutGamePanelEventType_NEXT.Name", "EOutGamePanelEventType::EOutGamePanelEventType_NEXT" },
				{ "EOutGamePanelEventType_OPEN.Name", "EOutGamePanelEventType::EOutGamePanelEventType_OPEN" },
				{ "EOutGamePanelEventType_PREV.Name", "EOutGamePanelEventType::EOutGamePanelEventType_PREV" },
				{ "EOutGamePanelEventType_SETUP.Name", "EOutGamePanelEventType::EOutGamePanelEventType_SETUP" },
				{ "ModuleRelativePath", "Public/EOutGamePanelEventType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EOutGamePanelEventType",
				"EOutGamePanelEventType",
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
