// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EEOSCommunityUserType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEOSCommunityUserType() {}
// Cross Module References
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSCommunityUserType();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	static UEnum* EEOSCommunityUserType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yEOSSDK_EEOSCommunityUserType, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EEOSCommunityUserType"));
		}
		return Singleton;
	}
	template<> YEOSSDK_API UEnum* StaticEnum<EEOSCommunityUserType>()
	{
		return EEOSCommunityUserType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEOSCommunityUserType(EEOSCommunityUserType_StaticEnum, TEXT("/Script/yEOSSDK"), TEXT("EEOSCommunityUserType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yEOSSDK_EEOSCommunityUserType_Hash() { return 1846155080U; }
	UEnum* Z_Construct_UEnum_yEOSSDK_EEOSCommunityUserType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEOSCommunityUserType"), 0, Get_Z_Construct_UEnum_yEOSSDK_EEOSCommunityUserType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEOSCommunityUserType::Public", (int64)EEOSCommunityUserType::Public },
				{ "EEOSCommunityUserType::Invite", (int64)EEOSCommunityUserType::Invite },
				{ "EEOSCommunityUserType::Presence", (int64)EEOSCommunityUserType::Presence },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Invite.Name", "EEOSCommunityUserType::Invite" },
				{ "ModuleRelativePath", "Public/EEOSCommunityUserType.h" },
				{ "Presence.Name", "EEOSCommunityUserType::Presence" },
				{ "Public.Name", "EEOSCommunityUserType::Public" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yEOSSDK,
				nullptr,
				"EEOSCommunityUserType",
				"EEOSCommunityUserType",
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