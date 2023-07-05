// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/yEnDialogBoxType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeyEnDialogBoxType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_yEnDialogBoxType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* yEnDialogBoxType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_yEnDialogBoxType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("yEnDialogBoxType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<yEnDialogBoxType>()
	{
		return yEnDialogBoxType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_yEnDialogBoxType(yEnDialogBoxType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("yEnDialogBoxType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_yEnDialogBoxType_Hash() { return 734434583U; }
	UEnum* Z_Construct_UEnum_ABP_200508_yEnDialogBoxType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("yEnDialogBoxType"), 0, Get_Z_Construct_UEnum_ABP_200508_yEnDialogBoxType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "yEnDialogBoxType::MessageDialog", (int64)yEnDialogBoxType::MessageDialog },
				{ "yEnDialogBoxType::TextEntryDialog", (int64)yEnDialogBoxType::TextEntryDialog },
				{ "yEnDialogBoxType::SinglePictureAndTextDialog", (int64)yEnDialogBoxType::SinglePictureAndTextDialog },
				{ "yEnDialogBoxType::ThreePictureAndTextDialog", (int64)yEnDialogBoxType::ThreePictureAndTextDialog },
				{ "yEnDialogBoxType::OnlyPictureDialog", (int64)yEnDialogBoxType::OnlyPictureDialog },
				{ "yEnDialogBoxType::OnlyTextDialog", (int64)yEnDialogBoxType::OnlyTextDialog },
				{ "yEnDialogBoxType::SingleItemGetDialog", (int64)yEnDialogBoxType::SingleItemGetDialog },
				{ "yEnDialogBoxType::TutorialDialog", (int64)yEnDialogBoxType::TutorialDialog },
				{ "yEnDialogBoxType::DisconnectedGamepadDialog", (int64)yEnDialogBoxType::DisconnectedGamepadDialog },
				{ "yEnDialogBoxType::None", (int64)yEnDialogBoxType::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DisconnectedGamepadDialog.Name", "yEnDialogBoxType::DisconnectedGamepadDialog" },
				{ "MessageDialog.Name", "yEnDialogBoxType::MessageDialog" },
				{ "ModuleRelativePath", "Public/yEnDialogBoxType.h" },
				{ "None.Name", "yEnDialogBoxType::None" },
				{ "OnlyPictureDialog.Name", "yEnDialogBoxType::OnlyPictureDialog" },
				{ "OnlyTextDialog.Name", "yEnDialogBoxType::OnlyTextDialog" },
				{ "SingleItemGetDialog.Name", "yEnDialogBoxType::SingleItemGetDialog" },
				{ "SinglePictureAndTextDialog.Name", "yEnDialogBoxType::SinglePictureAndTextDialog" },
				{ "TextEntryDialog.Name", "yEnDialogBoxType::TextEntryDialog" },
				{ "ThreePictureAndTextDialog.Name", "yEnDialogBoxType::ThreePictureAndTextDialog" },
				{ "TutorialDialog.Name", "yEnDialogBoxType::TutorialDialog" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"yEnDialogBoxType",
				"yEnDialogBoxType",
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
