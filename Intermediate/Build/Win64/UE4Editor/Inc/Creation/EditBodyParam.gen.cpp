// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/EditBodyParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditBodyParam() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditBodyParam();
	UPackage* Z_Construct_UPackage__Script_Creation();
// End Cross Module References
class UScriptStruct* FEditBodyParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FEditBodyParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditBodyParam, Z_Construct_UPackage__Script_Creation(), TEXT("EditBodyParam"), sizeof(FEditBodyParam), Get_Z_Construct_UScriptStruct_FEditBodyParam_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FEditBodyParam>()
{
	return FEditBodyParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEditBodyParam(FEditBodyParam::StaticStruct, TEXT("/Script/Creation"), TEXT("EditBodyParam"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFEditBodyParam
{
	FScriptStruct_Creation_StaticRegisterNativesFEditBodyParam()
	{
		UScriptStruct::DeferCppStructOps<FEditBodyParam>(FName(TEXT("EditBodyParam")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFEditBodyParam;
	struct Z_Construct_UScriptStruct_FEditBodyParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyTypeID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BodyTypeID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FaceTypeID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FaceTypeID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Fat_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Fat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Muscle_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Muscle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkinColorID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SkinColorID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftEyeTypeID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LeftEyeTypeID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightEyeTypeID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RightEyeTypeID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HairColor0ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HairColor0ID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HairColor1ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HairColor1ID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HairColor2ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HairColor2ID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EyebrowsColorID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EyebrowsColorID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeardColor0ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BeardColor0ID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeardColor1ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BeardColor1ID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyHairColorID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BodyHairColorID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditBodyParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EditBodyParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditBodyParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_BodyTypeID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditBodyParam" },
		{ "ModuleRelativePath", "Public/EditBodyParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_BodyTypeID = { "BodyTypeID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditBodyParam, BodyTypeID), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_BodyTypeID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_BodyTypeID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_FaceTypeID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditBodyParam" },
		{ "ModuleRelativePath", "Public/EditBodyParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_FaceTypeID = { "FaceTypeID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditBodyParam, FaceTypeID), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_FaceTypeID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_FaceTypeID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_Height_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditBodyParam" },
		{ "ModuleRelativePath", "Public/EditBodyParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditBodyParam, Height), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_Fat_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditBodyParam" },
		{ "ModuleRelativePath", "Public/EditBodyParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_Fat = { "Fat", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditBodyParam, Fat), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_Fat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_Fat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_Muscle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditBodyParam" },
		{ "ModuleRelativePath", "Public/EditBodyParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_Muscle = { "Muscle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditBodyParam, Muscle), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_Muscle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_Muscle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_SkinColorID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditBodyParam" },
		{ "ModuleRelativePath", "Public/EditBodyParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_SkinColorID = { "SkinColorID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditBodyParam, SkinColorID), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_SkinColorID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_SkinColorID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_LeftEyeTypeID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditBodyParam" },
		{ "ModuleRelativePath", "Public/EditBodyParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_LeftEyeTypeID = { "LeftEyeTypeID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditBodyParam, LeftEyeTypeID), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_LeftEyeTypeID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_LeftEyeTypeID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_RightEyeTypeID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditBodyParam" },
		{ "ModuleRelativePath", "Public/EditBodyParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_RightEyeTypeID = { "RightEyeTypeID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditBodyParam, RightEyeTypeID), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_RightEyeTypeID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_RightEyeTypeID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_HairColor0ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditBodyParam" },
		{ "ModuleRelativePath", "Public/EditBodyParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_HairColor0ID = { "HairColor0ID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditBodyParam, HairColor0ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_HairColor0ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_HairColor0ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_HairColor1ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditBodyParam" },
		{ "ModuleRelativePath", "Public/EditBodyParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_HairColor1ID = { "HairColor1ID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditBodyParam, HairColor1ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_HairColor1ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_HairColor1ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_HairColor2ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditBodyParam" },
		{ "ModuleRelativePath", "Public/EditBodyParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_HairColor2ID = { "HairColor2ID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditBodyParam, HairColor2ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_HairColor2ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_HairColor2ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_EyebrowsColorID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditBodyParam" },
		{ "ModuleRelativePath", "Public/EditBodyParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_EyebrowsColorID = { "EyebrowsColorID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditBodyParam, EyebrowsColorID), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_EyebrowsColorID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_EyebrowsColorID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_BeardColor0ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditBodyParam" },
		{ "ModuleRelativePath", "Public/EditBodyParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_BeardColor0ID = { "BeardColor0ID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditBodyParam, BeardColor0ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_BeardColor0ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_BeardColor0ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_BeardColor1ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditBodyParam" },
		{ "ModuleRelativePath", "Public/EditBodyParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_BeardColor1ID = { "BeardColor1ID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditBodyParam, BeardColor1ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_BeardColor1ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_BeardColor1ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_BodyHairColorID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditBodyParam" },
		{ "ModuleRelativePath", "Public/EditBodyParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_BodyHairColorID = { "BodyHairColorID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditBodyParam, BodyHairColorID), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_BodyHairColorID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_BodyHairColorID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditBodyParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_BodyTypeID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_FaceTypeID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_Fat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_Muscle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_SkinColorID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_LeftEyeTypeID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_RightEyeTypeID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_HairColor0ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_HairColor1ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_HairColor2ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_EyebrowsColorID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_BeardColor0ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_BeardColor1ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditBodyParam_Statics::NewProp_BodyHairColorID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditBodyParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		nullptr,
		&NewStructOps,
		"EditBodyParam",
		sizeof(FEditBodyParam),
		alignof(FEditBodyParam),
		Z_Construct_UScriptStruct_FEditBodyParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditBodyParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditBodyParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditBodyParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditBodyParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEditBodyParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EditBodyParam"), sizeof(FEditBodyParam), Get_Z_Construct_UScriptStruct_FEditBodyParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEditBodyParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEditBodyParam_Hash() { return 3365067022U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
