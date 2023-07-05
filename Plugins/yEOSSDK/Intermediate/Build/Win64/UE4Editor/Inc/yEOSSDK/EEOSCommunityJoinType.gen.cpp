// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EEOSCommunityJoinType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEOSCommunityJoinType() {}
// Cross Module References
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSCommunityJoinType();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	static UEnum* EEOSCommunityJoinType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yEOSSDK_EEOSCommunityJoinType, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EEOSCommunityJoinType"));
		}
		return Singleton;
	}
	template<> YEOSSDK_API UEnum* StaticEnum<EEOSCommunityJoinType>()
	{
		return EEOSCommunityJoinType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEOSCommunityJoinType(EEOSCommunityJoinType_StaticEnum, TEXT("/Script/yEOSSDK"), TEXT("EEOSCommunityJoinType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yEOSSDK_EEOSCommunityJoinType_Hash() { return 1302733770U; }
	UEnum* Z_Construct_UEnum_yEOSSDK_EEOSCommunityJoinType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEOSCommunityJoinType"), 0, Get_Z_Construct_UEnum_yEOSSDK_EEOSCommunityJoinType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEOSCommunityJoinType::Own", (int64)EEOSCommunityJoinType::Own },
				{ "EEOSCommunityJoinType::Search", (int64)EEOSCommunityJoinType::Search },
				{ "EEOSCommunityJoinType::Invite", (int64)EEOSCommunityJoinType::Invite },
				{ "EEOSCommunityJoinType::Other", (int64)EEOSCommunityJoinType::Other },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Invite.Name", "EEOSCommunityJoinType::Invite" },
				{ "ModuleRelativePath", "Public/EEOSCommunityJoinType.h" },
				{ "Other.Name", "EEOSCommunityJoinType::Other" },
				{ "Own.Name", "EEOSCommunityJoinType::Own" },
				{ "Search.Name", "EEOSCommunityJoinType::Search" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yEOSSDK,
				nullptr,
				"EEOSCommunityJoinType",
				"EEOSCommunityJoinType",
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
