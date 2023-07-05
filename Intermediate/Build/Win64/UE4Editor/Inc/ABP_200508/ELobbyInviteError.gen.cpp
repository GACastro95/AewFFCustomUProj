// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELobbyInviteError.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELobbyInviteError() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ELobbyInviteError();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ELobbyInviteError_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ELobbyInviteError, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELobbyInviteError"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ELobbyInviteError>()
	{
		return ELobbyInviteError_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELobbyInviteError(ELobbyInviteError_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ELobbyInviteError"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ELobbyInviteError_Hash() { return 3914558651U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ELobbyInviteError()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELobbyInviteError"), 0, Get_Z_Construct_UEnum_ABP_200508_ELobbyInviteError_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELobbyInviteError::None", (int64)ELobbyInviteError::None },
				{ "ELobbyInviteError::Timeout", (int64)ELobbyInviteError::Timeout },
				{ "ELobbyInviteError::OfflineLobbyOwner", (int64)ELobbyInviteError::OfflineLobbyOwner },
				{ "ELobbyInviteError::PartyMemberIsFull", (int64)ELobbyInviteError::PartyMemberIsFull },
				{ "ELobbyInviteError::PartyUnableJoin", (int64)ELobbyInviteError::PartyUnableJoin },
				{ "ELobbyInviteError::PartyJoinFailed", (int64)ELobbyInviteError::PartyJoinFailed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ELobbyInviteError.h" },
				{ "None.Name", "ELobbyInviteError::None" },
				{ "OfflineLobbyOwner.Name", "ELobbyInviteError::OfflineLobbyOwner" },
				{ "PartyJoinFailed.Name", "ELobbyInviteError::PartyJoinFailed" },
				{ "PartyMemberIsFull.Name", "ELobbyInviteError::PartyMemberIsFull" },
				{ "PartyUnableJoin.Name", "ELobbyInviteError::PartyUnableJoin" },
				{ "Timeout.Name", "ELobbyInviteError::Timeout" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ELobbyInviteError",
				"ELobbyInviteError",
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
