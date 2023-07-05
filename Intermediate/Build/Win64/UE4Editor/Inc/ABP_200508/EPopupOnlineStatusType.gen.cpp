// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EPopupOnlineStatusType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPopupOnlineStatusType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EPopupOnlineStatusType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EPopupOnlineStatusType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EPopupOnlineStatusType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EPopupOnlineStatusType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EPopupOnlineStatusType>()
	{
		return EPopupOnlineStatusType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPopupOnlineStatusType(EPopupOnlineStatusType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EPopupOnlineStatusType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EPopupOnlineStatusType_Hash() { return 1015861529U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EPopupOnlineStatusType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPopupOnlineStatusType"), 0, Get_Z_Construct_UEnum_ABP_200508_EPopupOnlineStatusType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPopupOnlineStatusType::None", (int64)EPopupOnlineStatusType::None },
				{ "EPopupOnlineStatusType::Invitation", (int64)EPopupOnlineStatusType::Invitation },
				{ "EPopupOnlineStatusType::Completed_Join", (int64)EPopupOnlineStatusType::Completed_Join },
				{ "EPopupOnlineStatusType::Completed_Leave", (int64)EPopupOnlineStatusType::Completed_Leave },
				{ "EPopupOnlineStatusType::Kick", (int64)EPopupOnlineStatusType::Kick },
				{ "EPopupOnlineStatusType::Joined_OtherPlayer", (int64)EPopupOnlineStatusType::Joined_OtherPlayer },
				{ "EPopupOnlineStatusType::Leaved_OtherPlayer", (int64)EPopupOnlineStatusType::Leaved_OtherPlayer },
				{ "EPopupOnlineStatusType::Kick_OtherPlayer", (int64)EPopupOnlineStatusType::Kick_OtherPlayer },
				{ "EPopupOnlineStatusType::Promote_Me", (int64)EPopupOnlineStatusType::Promote_Me },
				{ "EPopupOnlineStatusType::Promote_Other", (int64)EPopupOnlineStatusType::Promote_Other },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Completed_Join.Name", "EPopupOnlineStatusType::Completed_Join" },
				{ "Completed_Leave.Name", "EPopupOnlineStatusType::Completed_Leave" },
				{ "Invitation.Name", "EPopupOnlineStatusType::Invitation" },
				{ "Joined_OtherPlayer.Name", "EPopupOnlineStatusType::Joined_OtherPlayer" },
				{ "Kick.Name", "EPopupOnlineStatusType::Kick" },
				{ "Kick_OtherPlayer.Name", "EPopupOnlineStatusType::Kick_OtherPlayer" },
				{ "Leaved_OtherPlayer.Name", "EPopupOnlineStatusType::Leaved_OtherPlayer" },
				{ "ModuleRelativePath", "Public/EPopupOnlineStatusType.h" },
				{ "None.Name", "EPopupOnlineStatusType::None" },
				{ "Promote_Me.Name", "EPopupOnlineStatusType::Promote_Me" },
				{ "Promote_Other.Name", "EPopupOnlineStatusType::Promote_Other" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EPopupOnlineStatusType",
				"EPopupOnlineStatusType",
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
