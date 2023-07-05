// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/EditWrestlerPartsAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditWrestlerPartsAsset() {}
// Cross Module References
	CREATION_API UClass* Z_Construct_UClass_UEditWrestlerPartsAsset_NoRegister();
	CREATION_API UClass* Z_Construct_UClass_UEditWrestlerPartsAsset();
	CREATION_API UClass* Z_Construct_UClass_UCustomizeAssetBase();
	UPackage* Z_Construct_UPackage__Script_Creation();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditPartsCategoryDetails();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FIndexedColorList();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FColorParameterList();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditPartsCategoryName();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditColorSettings();
	CREATION_API UClass* Z_Construct_UClass_UEditWrestlerPaintAsset_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEditWrestlerPartsAsset::execGetColorSettingNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetColorSettingNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditWrestlerPartsAsset::execGetEditPartsCategoryDetails)
	{
		P_GET_STRUCT_REF(FEditPartsCategoryDetails,Z_Param_Out_Details);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetEditPartsCategoryDetails(Z_Param_Out_Details);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditWrestlerPartsAsset::execGetSkeletalMeshFromIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMesh**)Z_Param__Result=P_THIS->GetSkeletalMeshFromIndex(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditWrestlerPartsAsset::execMakeColorParamList)
	{
		P_GET_STRUCT_REF(FIndexedColorList,Z_Param_Out_In);
		P_GET_TMAP_REF(FName,FColorParameterList,Z_Param_Out_Out);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MakeColorParamList(Z_Param_Out_In,Z_Param_Out_Out);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditWrestlerPartsAsset::execUpdateEditPartsCategoryDetails)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateEditPartsCategoryDetails();
		P_NATIVE_END;
	}
	void UEditWrestlerPartsAsset::StaticRegisterNativesUEditWrestlerPartsAsset()
	{
		UClass* Class = UEditWrestlerPartsAsset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetColorSettingNum", &UEditWrestlerPartsAsset::execGetColorSettingNum },
			{ "GetEditPartsCategoryDetails", &UEditWrestlerPartsAsset::execGetEditPartsCategoryDetails },
			{ "GetSkeletalMeshFromIndex", &UEditWrestlerPartsAsset::execGetSkeletalMeshFromIndex },
			{ "MakeColorParamList", &UEditWrestlerPartsAsset::execMakeColorParamList },
			{ "UpdateEditPartsCategoryDetails", &UEditWrestlerPartsAsset::execUpdateEditPartsCategoryDetails },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEditWrestlerPartsAsset_GetColorSettingNum_Statics
	{
		struct EditWrestlerPartsAsset_eventGetColorSettingNum_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditWrestlerPartsAsset_GetColorSettingNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditWrestlerPartsAsset_eventGetColorSettingNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditWrestlerPartsAsset_GetColorSettingNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditWrestlerPartsAsset_GetColorSettingNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditWrestlerPartsAsset_GetColorSettingNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EditWrestlerPartsAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditWrestlerPartsAsset_GetColorSettingNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditWrestlerPartsAsset, nullptr, "GetColorSettingNum", nullptr, nullptr, sizeof(EditWrestlerPartsAsset_eventGetColorSettingNum_Parms), Z_Construct_UFunction_UEditWrestlerPartsAsset_GetColorSettingNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditWrestlerPartsAsset_GetColorSettingNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditWrestlerPartsAsset_GetColorSettingNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditWrestlerPartsAsset_GetColorSettingNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditWrestlerPartsAsset_GetColorSettingNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditWrestlerPartsAsset_GetColorSettingNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditWrestlerPartsAsset_GetEditPartsCategoryDetails_Statics
	{
		struct EditWrestlerPartsAsset_eventGetEditPartsCategoryDetails_Parms
		{
			FEditPartsCategoryDetails Details;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Details;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditWrestlerPartsAsset_GetEditPartsCategoryDetails_Statics::NewProp_Details = { "Details", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditWrestlerPartsAsset_eventGetEditPartsCategoryDetails_Parms, Details), Z_Construct_UScriptStruct_FEditPartsCategoryDetails, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditWrestlerPartsAsset_GetEditPartsCategoryDetails_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditWrestlerPartsAsset_GetEditPartsCategoryDetails_Statics::NewProp_Details,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditWrestlerPartsAsset_GetEditPartsCategoryDetails_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EditWrestlerPartsAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditWrestlerPartsAsset_GetEditPartsCategoryDetails_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditWrestlerPartsAsset, nullptr, "GetEditPartsCategoryDetails", nullptr, nullptr, sizeof(EditWrestlerPartsAsset_eventGetEditPartsCategoryDetails_Parms), Z_Construct_UFunction_UEditWrestlerPartsAsset_GetEditPartsCategoryDetails_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditWrestlerPartsAsset_GetEditPartsCategoryDetails_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditWrestlerPartsAsset_GetEditPartsCategoryDetails_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditWrestlerPartsAsset_GetEditPartsCategoryDetails_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditWrestlerPartsAsset_GetEditPartsCategoryDetails()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditWrestlerPartsAsset_GetEditPartsCategoryDetails_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditWrestlerPartsAsset_GetSkeletalMeshFromIndex_Statics
	{
		struct EditWrestlerPartsAsset_eventGetSkeletalMeshFromIndex_Parms
		{
			int32 Index;
			USkeletalMesh* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditWrestlerPartsAsset_GetSkeletalMeshFromIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditWrestlerPartsAsset_eventGetSkeletalMeshFromIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditWrestlerPartsAsset_GetSkeletalMeshFromIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditWrestlerPartsAsset_eventGetSkeletalMeshFromIndex_Parms, ReturnValue), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditWrestlerPartsAsset_GetSkeletalMeshFromIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditWrestlerPartsAsset_GetSkeletalMeshFromIndex_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditWrestlerPartsAsset_GetSkeletalMeshFromIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditWrestlerPartsAsset_GetSkeletalMeshFromIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EditWrestlerPartsAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditWrestlerPartsAsset_GetSkeletalMeshFromIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditWrestlerPartsAsset, nullptr, "GetSkeletalMeshFromIndex", nullptr, nullptr, sizeof(EditWrestlerPartsAsset_eventGetSkeletalMeshFromIndex_Parms), Z_Construct_UFunction_UEditWrestlerPartsAsset_GetSkeletalMeshFromIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditWrestlerPartsAsset_GetSkeletalMeshFromIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditWrestlerPartsAsset_GetSkeletalMeshFromIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditWrestlerPartsAsset_GetSkeletalMeshFromIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditWrestlerPartsAsset_GetSkeletalMeshFromIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditWrestlerPartsAsset_GetSkeletalMeshFromIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditWrestlerPartsAsset_MakeColorParamList_Statics
	{
		struct EditWrestlerPartsAsset_eventMakeColorParamList_Parms
		{
			FIndexedColorList In;
			TMap<FName,FColorParameterList> Out;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_In_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_In;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Out_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Out_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Out;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditWrestlerPartsAsset_MakeColorParamList_Statics::NewProp_In_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditWrestlerPartsAsset_MakeColorParamList_Statics::NewProp_In = { "In", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditWrestlerPartsAsset_eventMakeColorParamList_Parms, In), Z_Construct_UScriptStruct_FIndexedColorList, METADATA_PARAMS(Z_Construct_UFunction_UEditWrestlerPartsAsset_MakeColorParamList_Statics::NewProp_In_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditWrestlerPartsAsset_MakeColorParamList_Statics::NewProp_In_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditWrestlerPartsAsset_MakeColorParamList_Statics::NewProp_Out_ValueProp = { "Out", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FColorParameterList, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEditWrestlerPartsAsset_MakeColorParamList_Statics::NewProp_Out_Key_KeyProp = { "Out_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UEditWrestlerPartsAsset_MakeColorParamList_Statics::NewProp_Out = { "Out", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditWrestlerPartsAsset_eventMakeColorParamList_Parms, Out), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditWrestlerPartsAsset_MakeColorParamList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditWrestlerPartsAsset_MakeColorParamList_Statics::NewProp_In,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditWrestlerPartsAsset_MakeColorParamList_Statics::NewProp_Out_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditWrestlerPartsAsset_MakeColorParamList_Statics::NewProp_Out_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditWrestlerPartsAsset_MakeColorParamList_Statics::NewProp_Out,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditWrestlerPartsAsset_MakeColorParamList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EditWrestlerPartsAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditWrestlerPartsAsset_MakeColorParamList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditWrestlerPartsAsset, nullptr, "MakeColorParamList", nullptr, nullptr, sizeof(EditWrestlerPartsAsset_eventMakeColorParamList_Parms), Z_Construct_UFunction_UEditWrestlerPartsAsset_MakeColorParamList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditWrestlerPartsAsset_MakeColorParamList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditWrestlerPartsAsset_MakeColorParamList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditWrestlerPartsAsset_MakeColorParamList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditWrestlerPartsAsset_MakeColorParamList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditWrestlerPartsAsset_MakeColorParamList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditWrestlerPartsAsset_UpdateEditPartsCategoryDetails_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditWrestlerPartsAsset_UpdateEditPartsCategoryDetails_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EditWrestlerPartsAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditWrestlerPartsAsset_UpdateEditPartsCategoryDetails_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditWrestlerPartsAsset, nullptr, "UpdateEditPartsCategoryDetails", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditWrestlerPartsAsset_UpdateEditPartsCategoryDetails_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditWrestlerPartsAsset_UpdateEditPartsCategoryDetails_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditWrestlerPartsAsset_UpdateEditPartsCategoryDetails()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditWrestlerPartsAsset_UpdateEditPartsCategoryDetails_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEditWrestlerPartsAsset_NoRegister()
	{
		return UEditWrestlerPartsAsset::StaticClass();
	}
	struct Z_Construct_UClass_UEditWrestlerPartsAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasPartsCategoryDetails_MetaData[];
#endif
		static void NewProp_bHasPartsCategoryDetails_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasPartsCategoryDetails;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartsCategoryDetails_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PartsCategoryDetails;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Category;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReplaceMesh_MetaData[];
#endif
		static void NewProp_bReplaceMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReplaceMesh;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubMeshes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SubMeshes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditColorSetting_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditColorSetting_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EditColorSetting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTexChange_MetaData[];
#endif
		static void NewProp_bTexChange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTexChange;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReplaceTextures_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplaceTextures_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReplaceTextures;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditWrestlerPartsAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomizeAssetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEditWrestlerPartsAsset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEditWrestlerPartsAsset_GetColorSettingNum, "GetColorSettingNum" }, // 3579992577
		{ &Z_Construct_UFunction_UEditWrestlerPartsAsset_GetEditPartsCategoryDetails, "GetEditPartsCategoryDetails" }, // 66863101
		{ &Z_Construct_UFunction_UEditWrestlerPartsAsset_GetSkeletalMeshFromIndex, "GetSkeletalMeshFromIndex" }, // 2724897291
		{ &Z_Construct_UFunction_UEditWrestlerPartsAsset_MakeColorParamList, "MakeColorParamList" }, // 2328231662
		{ &Z_Construct_UFunction_UEditWrestlerPartsAsset_UpdateEditPartsCategoryDetails, "UpdateEditPartsCategoryDetails" }, // 1583786134
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditWrestlerPartsAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EditWrestlerPartsAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EditWrestlerPartsAsset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditWrestlerPartsAsset_Statics::NewProp_bHasPartsCategoryDetails_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditWrestlerPartsAsset" },
		{ "ModuleRelativePath", "Public/EditWrestlerPartsAsset.h" },
	};
#endif
	void Z_Construct_UClass_UEditWrestlerPartsAsset_Statics::NewProp_bHasPartsCategoryDetails_SetBit(void* Obj)
	{
		((UEditWrestlerPartsAsset*)Obj)->bHasPartsCategoryDetails = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditWrestlerPartsAsset_Statics::NewProp_bHasPartsCategoryDetails = { "bHasPartsCategoryDetails", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEditWrestlerPartsAsset), &Z_Construct_UClass_UEditWrestlerPartsAsset_Statics::NewProp_bHasPartsCategoryDetails_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditWrestlerPartsAsset_Statics::NewProp_bHasPartsCategoryDetails_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditWrestlerPartsAsset_Statics::NewProp_bHasPartsCategoryDetails_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditWrestlerPartsAsset_Statics::NewProp_PartsCategoryDetails_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditWrestlerPartsAsset" },
		{ "ModuleRelativePath", "Public/EditWrestlerPartsAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditWrestlerPartsAsset_Statics::NewProp_PartsCategoryDetails = { "PartsCategoryDetails", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditWrestlerPartsAsset, PartsCategoryDetails), Z_Construct_UScriptStruct_FEditPartsCategoryDetails, METADATA_PARAMS(Z_Construct_UClass_UEditWrestlerPartsAsset_Statics::NewProp_PartsCategoryDetails_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditWrestlerPartsAsset_Statics::NewProp_PartsCategoryDetails_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditWrestlerPartsAsset_Statics::NewProp_Category_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditWrestlerPartsAsset" },
		{ "ModuleRelativePath", "Public/EditWrestlerPartsAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditWrestlerPartsAsset_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010010000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditWrestlerPartsAsset, Category), Z_Construct_UScriptStruct_FEditPartsCategoryName, METADATA_PARAMS(Z_Construct_UClass_UEditWrestlerPartsAsset_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditWrestlerPartsAsset_Statics::NewProp_Category_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditWrestlerPartsAsset_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditWrestlerPartsAsset" },
		{ "ModuleRelativePath", "Public/EditWrestlerPartsAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditWrestlerPartsAsset_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditWrestlerPartsAsset, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditWrestlerPartsAsset_Statics::NewProp_SkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditWrestlerPartsAsset_Statics::NewProp_SkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditWrestlerPartsAsset_Statics::NewProp_bReplaceMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditWrestlerPartsAsset" },
		{ "ModuleRelativePath", "Public/EditWrestlerPartsAsset.h" },
	};
#endif
	void Z_Construct_UClass_UEditWrestlerPartsAsset_Statics::NewProp_bReplaceMesh_SetBit(void* Obj)
	{
		((UEditWrestlerPartsAsset*)Obj)->bReplaceMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditWrestlerPartsAsset_Statics::NewProp_bReplaceMesh = { "bReplaceMesh", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEditWrestlerPartsAsset), &Z_Construct_UClass_UEditWrestlerPartsAsset_Statics::NewProp_bReplaceMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditWrestlerPartsAsset_Statics::NewProp_bReplaceMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditWrestlerPartsAsset_Statics::NewProp_bReplaceMesh_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditWrestlerPartsAsset_Statics::NewProp_SubMeshes_Inner = { "SubMeshes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditWrestlerPartsAsset_Statics::NewProp_SubMeshes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditWrestlerPartsAsset" },
		{ "ModuleRelativePath", "Public/EditWrestlerPartsAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditWrestlerPartsAsset_Statics::NewProp_SubMeshes = { "SubMeshes", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditWrestlerPartsAsset, SubMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEditWrestlerPartsAsset_Statics::NewProp_SubMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditWrestlerPartsAsset_Statics::NewProp_SubMeshes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditWrestlerPartsAsset_Statics::NewProp_EditColorSetting_Inner = { "EditColorSetting", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEditColorSettings, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditWrestlerPartsAsset_Statics::NewProp_EditColorSetting_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditWrestlerPartsAsset" },
		{ "ModuleRelativePath", "Public/EditWrestlerPartsAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditWrestlerPartsAsset_Statics::NewProp_EditColorSetting = { "EditColorSetting", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditWrestlerPartsAsset, EditColorSetting), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEditWrestlerPartsAsset_Statics::NewProp_EditColorSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditWrestlerPartsAsset_Statics::NewProp_EditColorSetting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditWrestlerPartsAsset_Statics::NewProp_bTexChange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditWrestlerPartsAsset" },
		{ "ModuleRelativePath", "Public/EditWrestlerPartsAsset.h" },
	};
#endif
	void Z_Construct_UClass_UEditWrestlerPartsAsset_Statics::NewProp_bTexChange_SetBit(void* Obj)
	{
		((UEditWrestlerPartsAsset*)Obj)->bTexChange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditWrestlerPartsAsset_Statics::NewProp_bTexChange = { "bTexChange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEditWrestlerPartsAsset), &Z_Construct_UClass_UEditWrestlerPartsAsset_Statics::NewProp_bTexChange_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditWrestlerPartsAsset_Statics::NewProp_bTexChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditWrestlerPartsAsset_Statics::NewProp_bTexChange_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditWrestlerPartsAsset_Statics::NewProp_ReplaceTextures_Inner = { "ReplaceTextures", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEditWrestlerPaintAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditWrestlerPartsAsset_Statics::NewProp_ReplaceTextures_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditWrestlerPartsAsset" },
		{ "ModuleRelativePath", "Public/EditWrestlerPartsAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditWrestlerPartsAsset_Statics::NewProp_ReplaceTextures = { "ReplaceTextures", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditWrestlerPartsAsset, ReplaceTextures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEditWrestlerPartsAsset_Statics::NewProp_ReplaceTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditWrestlerPartsAsset_Statics::NewProp_ReplaceTextures_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditWrestlerPartsAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditWrestlerPartsAsset_Statics::NewProp_bHasPartsCategoryDetails,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditWrestlerPartsAsset_Statics::NewProp_PartsCategoryDetails,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditWrestlerPartsAsset_Statics::NewProp_Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditWrestlerPartsAsset_Statics::NewProp_SkeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditWrestlerPartsAsset_Statics::NewProp_bReplaceMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditWrestlerPartsAsset_Statics::NewProp_SubMeshes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditWrestlerPartsAsset_Statics::NewProp_SubMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditWrestlerPartsAsset_Statics::NewProp_EditColorSetting_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditWrestlerPartsAsset_Statics::NewProp_EditColorSetting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditWrestlerPartsAsset_Statics::NewProp_bTexChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditWrestlerPartsAsset_Statics::NewProp_ReplaceTextures_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditWrestlerPartsAsset_Statics::NewProp_ReplaceTextures,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditWrestlerPartsAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditWrestlerPartsAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditWrestlerPartsAsset_Statics::ClassParams = {
		&UEditWrestlerPartsAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEditWrestlerPartsAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEditWrestlerPartsAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEditWrestlerPartsAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditWrestlerPartsAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditWrestlerPartsAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditWrestlerPartsAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditWrestlerPartsAsset, 1392376844);
	template<> CREATION_API UClass* StaticClass<UEditWrestlerPartsAsset>()
	{
		return UEditWrestlerPartsAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditWrestlerPartsAsset(Z_Construct_UClass_UEditWrestlerPartsAsset, &UEditWrestlerPartsAsset::StaticClass, TEXT("/Script/Creation"), TEXT("UEditWrestlerPartsAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditWrestlerPartsAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
