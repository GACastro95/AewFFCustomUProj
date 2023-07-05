// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELobbyPrivateMatchStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELobbyPrivateMatchStatus() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ELobbyPrivateMatchStatus();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ELobbyPrivateMatchStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ELobbyPrivateMatchStatus, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELobbyPrivateMatchStatus"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ELobbyPrivateMatchStatus>()
	{
		return ELobbyPrivateMatchStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELobbyPrivateMatchStatus(ELobbyPrivateMatchStatus_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ELobbyPrivateMatchStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ELobbyPrivateMatchStatus_Hash() { return 1965502206U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ELobbyPrivateMatchStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELobbyPrivateMatchStatus"), 0, Get_Z_Construct_UEnum_ABP_200508_ELobbyPrivateMatchStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELobbyPrivateMatchStatus::None", (int64)ELobbyPrivateMatchStatus::None },
				{ "ELobbyPrivateMatchStatus::Wait", (int64)ELobbyPrivateMatchStatus::Wait },
				{ "ELobbyPrivateMatchStatus::Ready", (int64)ELobbyPrivateMatchStatus::Ready },
				{ "ELobbyPrivateMatchStatus::MatchStart", (int64)ELobbyPrivateMatchStatus::MatchStart },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "MatchStart.Name", "ELobbyPrivateMatchStatus::MatchStart" },
				{ "ModuleRelativePath", "Public/ELobbyPrivateMatchStatus.h" },
				{ "None.Name", "ELobbyPrivateMatchStatus::None" },
				{ "Ready.Name", "ELobbyPrivateMatchStatus::Ready" },
				{ "Wait.Name", "ELobbyPrivateMatchStatus::Wait" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ELobbyPrivateMatchStatus",
				"ELobbyPrivateMatchStatus",
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
