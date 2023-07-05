// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELUserProfileUtility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELUserProfileUtility() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELUserProfileUtility_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELUserProfileUtility();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELUserProfileUtility::execRemoveUserDesignFromWeapon)
	{
		P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_InDynamicMaterial_Logo);
		P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_InDynamicMaterial_Base);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELUserProfileUtility::RemoveUserDesignFromWeapon(Z_Param_InDynamicMaterial_Logo,Z_Param_InDynamicMaterial_Base);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELUserProfileUtility::execSetUserDesignToWeapon)
	{
		P_GET_OBJECT_REF(UMaterialInstanceDynamic,Z_Param_Out_InDynamicMaterial_Logo);
		P_GET_OBJECT_REF(UMaterialInstanceDynamic,Z_Param_Out_InDynamicMaterial_Base);
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_InUserColor);
		P_GET_OBJECT(UTexture,Z_Param_InUserTexture);
		P_GET_OBJECT(UTexture,Z_Param_InSymbolTexture);
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_InTargetSkeletalMesh);
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_InTargetStaticMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELUserProfileUtility::SetUserDesignToWeapon(Z_Param_Out_InDynamicMaterial_Logo,Z_Param_Out_InDynamicMaterial_Base,Z_Param_Out_InUserColor,Z_Param_InUserTexture,Z_Param_InSymbolTexture,Z_Param_InTargetSkeletalMesh,Z_Param_InTargetStaticMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELUserProfileUtility::execSetUserDesignToWeaponPreCreatedMID)
	{
		P_GET_OBJECT_REF(UMaterialInstanceDynamic,Z_Param_Out_InDynamicMaterial_Logo);
		P_GET_OBJECT_REF(UMaterialInstanceDynamic,Z_Param_Out_InDynamicMaterial_Base);
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_InUserColor);
		P_GET_OBJECT(UTexture,Z_Param_InUserTexture);
		P_GET_OBJECT(UTexture,Z_Param_InSymbolTexture);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELUserProfileUtility::SetUserDesignToWeaponPreCreatedMID(Z_Param_Out_InDynamicMaterial_Logo,Z_Param_Out_InDynamicMaterial_Base,Z_Param_Out_InUserColor,Z_Param_InUserTexture,Z_Param_InSymbolTexture);
		P_NATIVE_END;
	}
	void UELUserProfileUtility::StaticRegisterNativesUELUserProfileUtility()
	{
		UClass* Class = UELUserProfileUtility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RemoveUserDesignFromWeapon", &UELUserProfileUtility::execRemoveUserDesignFromWeapon },
			{ "SetUserDesignToWeapon", &UELUserProfileUtility::execSetUserDesignToWeapon },
			{ "SetUserDesignToWeaponPreCreatedMID", &UELUserProfileUtility::execSetUserDesignToWeaponPreCreatedMID },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELUserProfileUtility_RemoveUserDesignFromWeapon_Statics
	{
		struct ELUserProfileUtility_eventRemoveUserDesignFromWeapon_Parms
		{
			UMaterialInstanceDynamic* InDynamicMaterial_Logo;
			UMaterialInstanceDynamic* InDynamicMaterial_Base;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InDynamicMaterial_Logo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InDynamicMaterial_Base;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELUserProfileUtility_RemoveUserDesignFromWeapon_Statics::NewProp_InDynamicMaterial_Logo = { "InDynamicMaterial_Logo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserProfileUtility_eventRemoveUserDesignFromWeapon_Parms, InDynamicMaterial_Logo), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELUserProfileUtility_RemoveUserDesignFromWeapon_Statics::NewProp_InDynamicMaterial_Base = { "InDynamicMaterial_Base", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserProfileUtility_eventRemoveUserDesignFromWeapon_Parms, InDynamicMaterial_Base), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELUserProfileUtility_RemoveUserDesignFromWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileUtility_RemoveUserDesignFromWeapon_Statics::NewProp_InDynamicMaterial_Logo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileUtility_RemoveUserDesignFromWeapon_Statics::NewProp_InDynamicMaterial_Base,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUserProfileUtility_RemoveUserDesignFromWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELUserProfileUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELUserProfileUtility_RemoveUserDesignFromWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELUserProfileUtility, nullptr, "RemoveUserDesignFromWeapon", nullptr, nullptr, sizeof(ELUserProfileUtility_eventRemoveUserDesignFromWeapon_Parms), Z_Construct_UFunction_UELUserProfileUtility_RemoveUserDesignFromWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserProfileUtility_RemoveUserDesignFromWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELUserProfileUtility_RemoveUserDesignFromWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserProfileUtility_RemoveUserDesignFromWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELUserProfileUtility_RemoveUserDesignFromWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELUserProfileUtility_RemoveUserDesignFromWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELUserProfileUtility_SetUserDesignToWeapon_Statics
	{
		struct ELUserProfileUtility_eventSetUserDesignToWeapon_Parms
		{
			UMaterialInstanceDynamic* InDynamicMaterial_Logo;
			UMaterialInstanceDynamic* InDynamicMaterial_Base;
			FLinearColor InUserColor;
			UTexture* InUserTexture;
			UTexture* InSymbolTexture;
			USkeletalMeshComponent* InTargetSkeletalMesh;
			UStaticMeshComponent* InTargetStaticMesh;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InDynamicMaterial_Logo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InDynamicMaterial_Base;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InUserColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InUserColor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InUserTexture;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSymbolTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTargetSkeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InTargetSkeletalMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTargetStaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InTargetStaticMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELUserProfileUtility_SetUserDesignToWeapon_Statics::NewProp_InDynamicMaterial_Logo = { "InDynamicMaterial_Logo", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserProfileUtility_eventSetUserDesignToWeapon_Parms, InDynamicMaterial_Logo), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELUserProfileUtility_SetUserDesignToWeapon_Statics::NewProp_InDynamicMaterial_Base = { "InDynamicMaterial_Base", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserProfileUtility_eventSetUserDesignToWeapon_Parms, InDynamicMaterial_Base), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUserProfileUtility_SetUserDesignToWeapon_Statics::NewProp_InUserColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELUserProfileUtility_SetUserDesignToWeapon_Statics::NewProp_InUserColor = { "InUserColor", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserProfileUtility_eventSetUserDesignToWeapon_Parms, InUserColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_UELUserProfileUtility_SetUserDesignToWeapon_Statics::NewProp_InUserColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserProfileUtility_SetUserDesignToWeapon_Statics::NewProp_InUserColor_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELUserProfileUtility_SetUserDesignToWeapon_Statics::NewProp_InUserTexture = { "InUserTexture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserProfileUtility_eventSetUserDesignToWeapon_Parms, InUserTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELUserProfileUtility_SetUserDesignToWeapon_Statics::NewProp_InSymbolTexture = { "InSymbolTexture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserProfileUtility_eventSetUserDesignToWeapon_Parms, InSymbolTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUserProfileUtility_SetUserDesignToWeapon_Statics::NewProp_InTargetSkeletalMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELUserProfileUtility_SetUserDesignToWeapon_Statics::NewProp_InTargetSkeletalMesh = { "InTargetSkeletalMesh", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserProfileUtility_eventSetUserDesignToWeapon_Parms, InTargetSkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELUserProfileUtility_SetUserDesignToWeapon_Statics::NewProp_InTargetSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserProfileUtility_SetUserDesignToWeapon_Statics::NewProp_InTargetSkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUserProfileUtility_SetUserDesignToWeapon_Statics::NewProp_InTargetStaticMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELUserProfileUtility_SetUserDesignToWeapon_Statics::NewProp_InTargetStaticMesh = { "InTargetStaticMesh", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserProfileUtility_eventSetUserDesignToWeapon_Parms, InTargetStaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELUserProfileUtility_SetUserDesignToWeapon_Statics::NewProp_InTargetStaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserProfileUtility_SetUserDesignToWeapon_Statics::NewProp_InTargetStaticMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELUserProfileUtility_SetUserDesignToWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileUtility_SetUserDesignToWeapon_Statics::NewProp_InDynamicMaterial_Logo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileUtility_SetUserDesignToWeapon_Statics::NewProp_InDynamicMaterial_Base,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileUtility_SetUserDesignToWeapon_Statics::NewProp_InUserColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileUtility_SetUserDesignToWeapon_Statics::NewProp_InUserTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileUtility_SetUserDesignToWeapon_Statics::NewProp_InSymbolTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileUtility_SetUserDesignToWeapon_Statics::NewProp_InTargetSkeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileUtility_SetUserDesignToWeapon_Statics::NewProp_InTargetStaticMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUserProfileUtility_SetUserDesignToWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELUserProfileUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELUserProfileUtility_SetUserDesignToWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELUserProfileUtility, nullptr, "SetUserDesignToWeapon", nullptr, nullptr, sizeof(ELUserProfileUtility_eventSetUserDesignToWeapon_Parms), Z_Construct_UFunction_UELUserProfileUtility_SetUserDesignToWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserProfileUtility_SetUserDesignToWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELUserProfileUtility_SetUserDesignToWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserProfileUtility_SetUserDesignToWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELUserProfileUtility_SetUserDesignToWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELUserProfileUtility_SetUserDesignToWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELUserProfileUtility_SetUserDesignToWeaponPreCreatedMID_Statics
	{
		struct ELUserProfileUtility_eventSetUserDesignToWeaponPreCreatedMID_Parms
		{
			UMaterialInstanceDynamic* InDynamicMaterial_Logo;
			UMaterialInstanceDynamic* InDynamicMaterial_Base;
			FLinearColor InUserColor;
			UTexture* InUserTexture;
			UTexture* InSymbolTexture;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InDynamicMaterial_Logo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InDynamicMaterial_Base;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InUserColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InUserColor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InUserTexture;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSymbolTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELUserProfileUtility_SetUserDesignToWeaponPreCreatedMID_Statics::NewProp_InDynamicMaterial_Logo = { "InDynamicMaterial_Logo", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserProfileUtility_eventSetUserDesignToWeaponPreCreatedMID_Parms, InDynamicMaterial_Logo), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELUserProfileUtility_SetUserDesignToWeaponPreCreatedMID_Statics::NewProp_InDynamicMaterial_Base = { "InDynamicMaterial_Base", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserProfileUtility_eventSetUserDesignToWeaponPreCreatedMID_Parms, InDynamicMaterial_Base), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUserProfileUtility_SetUserDesignToWeaponPreCreatedMID_Statics::NewProp_InUserColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELUserProfileUtility_SetUserDesignToWeaponPreCreatedMID_Statics::NewProp_InUserColor = { "InUserColor", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserProfileUtility_eventSetUserDesignToWeaponPreCreatedMID_Parms, InUserColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_UELUserProfileUtility_SetUserDesignToWeaponPreCreatedMID_Statics::NewProp_InUserColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserProfileUtility_SetUserDesignToWeaponPreCreatedMID_Statics::NewProp_InUserColor_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELUserProfileUtility_SetUserDesignToWeaponPreCreatedMID_Statics::NewProp_InUserTexture = { "InUserTexture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserProfileUtility_eventSetUserDesignToWeaponPreCreatedMID_Parms, InUserTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELUserProfileUtility_SetUserDesignToWeaponPreCreatedMID_Statics::NewProp_InSymbolTexture = { "InSymbolTexture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserProfileUtility_eventSetUserDesignToWeaponPreCreatedMID_Parms, InSymbolTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELUserProfileUtility_SetUserDesignToWeaponPreCreatedMID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileUtility_SetUserDesignToWeaponPreCreatedMID_Statics::NewProp_InDynamicMaterial_Logo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileUtility_SetUserDesignToWeaponPreCreatedMID_Statics::NewProp_InDynamicMaterial_Base,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileUtility_SetUserDesignToWeaponPreCreatedMID_Statics::NewProp_InUserColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileUtility_SetUserDesignToWeaponPreCreatedMID_Statics::NewProp_InUserTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileUtility_SetUserDesignToWeaponPreCreatedMID_Statics::NewProp_InSymbolTexture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUserProfileUtility_SetUserDesignToWeaponPreCreatedMID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELUserProfileUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELUserProfileUtility_SetUserDesignToWeaponPreCreatedMID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELUserProfileUtility, nullptr, "SetUserDesignToWeaponPreCreatedMID", nullptr, nullptr, sizeof(ELUserProfileUtility_eventSetUserDesignToWeaponPreCreatedMID_Parms), Z_Construct_UFunction_UELUserProfileUtility_SetUserDesignToWeaponPreCreatedMID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserProfileUtility_SetUserDesignToWeaponPreCreatedMID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELUserProfileUtility_SetUserDesignToWeaponPreCreatedMID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserProfileUtility_SetUserDesignToWeaponPreCreatedMID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELUserProfileUtility_SetUserDesignToWeaponPreCreatedMID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELUserProfileUtility_SetUserDesignToWeaponPreCreatedMID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELUserProfileUtility_NoRegister()
	{
		return UELUserProfileUtility::StaticClass();
	}
	struct Z_Construct_UClass_UELUserProfileUtility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELUserProfileUtility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELUserProfileUtility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELUserProfileUtility_RemoveUserDesignFromWeapon, "RemoveUserDesignFromWeapon" }, // 624871622
		{ &Z_Construct_UFunction_UELUserProfileUtility_SetUserDesignToWeapon, "SetUserDesignToWeapon" }, // 1125539266
		{ &Z_Construct_UFunction_UELUserProfileUtility_SetUserDesignToWeaponPreCreatedMID, "SetUserDesignToWeaponPreCreatedMID" }, // 950326552
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELUserProfileUtility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELUserProfileUtility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELUserProfileUtility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELUserProfileUtility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELUserProfileUtility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELUserProfileUtility_Statics::ClassParams = {
		&UELUserProfileUtility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELUserProfileUtility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELUserProfileUtility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELUserProfileUtility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELUserProfileUtility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELUserProfileUtility, 1531656394);
	template<> ABP_200508_API UClass* StaticClass<UELUserProfileUtility>()
	{
		return UELUserProfileUtility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELUserProfileUtility(Z_Construct_UClass_UELUserProfileUtility, &UELUserProfileUtility::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELUserProfileUtility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELUserProfileUtility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
