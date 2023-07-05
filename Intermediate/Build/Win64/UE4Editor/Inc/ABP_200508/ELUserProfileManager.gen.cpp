// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELUserProfileManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELUserProfileManager() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELUserProfileManager_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELUserProfileManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_USaveDataObject_PlayerData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EUserProfileEditType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FUserProfileColorParam();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FUserProfileWeaponPlacementInfo();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FUserProfileUserIconInfo();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FUserProfileUserIconBgInfo();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FUserProfileBadgeInfo();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FUserProfileWeaponDecalInfo();
// End Cross Module References
	DEFINE_FUNCTION(UELUserProfileManager::execApplySaveDataToParam)
	{
		P_GET_OBJECT(USaveDataObject_PlayerData,Z_Param__playerData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplySaveDataToParam(Z_Param__playerData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELUserProfileManager::execGetBadgeList)
	{
		P_GET_UBOOL_REF(Z_Param_Out_IsEditedBadge);
		P_GET_TARRAY_REF(int32,Z_Param_Out__outBadgeList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetBadgeList(Z_Param_Out_IsEditedBadge,Z_Param_Out__outBadgeList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELUserProfileManager::execGetBadgeTexture)
	{
		P_GET_TARRAY(int32,Z_Param__iconIdList);
		P_GET_TARRAY_REF(TSoftObjectPtr<UTexture2D>,Z_Param_Out__outTextureList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetBadgeTexture(Z_Param__iconIdList,Z_Param_Out__outTextureList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELUserProfileManager::execGetLastSelectedWeaponIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetLastSelectedWeaponIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELUserProfileManager::execGetLinkageUnlockableItemID)
	{
		P_GET_ENUM(EUserProfileEditType,Z_Param__editType);
		P_GET_PROPERTY(FIntProperty,Z_Param__checkItemID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetLinkageUnlockableItemID(EUserProfileEditType(Z_Param__editType),Z_Param__checkItemID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELUserProfileManager::execGetMyWeaponDecalTexture)
	{
		P_GET_UBOOL_REF(Z_Param_Out__findAsset);
		P_GET_OBJECT_REF(UTexture2D,Z_Param_Out__outWeaponSymbolTex);
		P_GET_OBJECT_REF(UTexture2D,Z_Param_Out__outWeaponBgTex);
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out__outColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetMyWeaponDecalTexture(Z_Param_Out__findAsset,Z_Param_Out__outWeaponSymbolTex,Z_Param_Out__outWeaponBgTex,Z_Param_Out__outColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELUserProfileManager::execGetPlayerIcon)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out__outPlayerIconID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPlayerIcon(Z_Param_Out__outPlayerIconID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELUserProfileManager::execGetPlayerIconBg)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out__outIconID);
		P_GET_STRUCT_REF(FUserProfileColorParam,Z_Param_Out__outColorParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPlayerIconBg(Z_Param_Out__outIconID,Z_Param_Out__outColorParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELUserProfileManager::execGetPlayerIconBgTexture)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__iconID);
		P_GET_SOFTOBJECT_REF(TSoftObjectPtr<UTexture2D>,Z_Param_Out__outTexture);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPlayerIconBgTexture(Z_Param__iconID,Z_Param_Out__outTexture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELUserProfileManager::execGetPlayerIconTexture)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__iconID);
		P_GET_SOFTOBJECT_REF(TSoftObjectPtr<UTexture2D>,Z_Param_Out__outTexture);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPlayerIconTexture(Z_Param__iconID,Z_Param_Out__outTexture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELUserProfileManager::execGetProfileColor)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__colorID);
		P_GET_PROPERTY(FIntProperty,Z_Param__colorListIndex);
		P_GET_ENUM(EUserProfileEditType,Z_Param__editType);
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out__outColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetProfileColor(Z_Param__colorID,Z_Param__colorListIndex,EUserProfileEditType(Z_Param__editType),Z_Param_Out__outColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELUserProfileManager::execGetWeaponDecal)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out__outDecalID);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out__outDecalSymboiID);
		P_GET_STRUCT_REF(FUserProfileColorParam,Z_Param_Out__outColorParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetWeaponDecal(Z_Param_Out__outDecalID,Z_Param_Out__outDecalSymboiID,Z_Param_Out__outColorParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELUserProfileManager::execGetWeaponDecalTexture)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__iconID);
		P_GET_SOFTOBJECT_REF(TSoftObjectPtr<UTexture2D>,Z_Param_Out__outTexture);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetWeaponDecalTexture(Z_Param__iconID,Z_Param_Out__outTexture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELUserProfileManager::execGetWeaponDecalTextureAndColor)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__iconID);
		P_GET_PROPERTY(FIntProperty,Z_Param__symbolID);
		P_GET_PROPERTY(FIntProperty,Z_Param__colorID);
		P_GET_PROPERTY(FIntProperty,Z_Param__colorListIndex);
		P_GET_SOFTOBJECT_REF(TSoftObjectPtr<UTexture2D>,Z_Param_Out__outTexture);
		P_GET_SOFTOBJECT_REF(TSoftObjectPtr<UTexture2D>,Z_Param_Out__outSymbolTexture);
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out__outColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetWeaponDecalTextureAndColor(Z_Param__iconID,Z_Param__symbolID,Z_Param__colorID,Z_Param__colorListIndex,Z_Param_Out__outTexture,Z_Param_Out__outSymbolTexture,Z_Param_Out__outColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELUserProfileManager::execGetWeaponPlacementAt)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__Index);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out__outTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetWeaponPlacementAt(Z_Param__Index,Z_Param_Out__outTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELUserProfileManager::execGetWeaponPlacementInfoAt)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__Index);
		P_GET_STRUCT_REF(FUserProfileWeaponPlacementInfo,Z_Param_Out__outInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetWeaponPlacementInfoAt(Z_Param__Index,Z_Param_Out__outInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELUserProfileManager::execGetWeaponPlacementInfoNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetWeaponPlacementInfoNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELUserProfileManager::execGetWeaponSymbolIcon)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out__outSymbolIconID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetWeaponSymbolIcon(Z_Param_Out__outSymbolIconID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELUserProfileManager::execGetWeaponSymbolTexture)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__iconID);
		P_GET_SOFTOBJECT_REF(TSoftObjectPtr<UTexture2D>,Z_Param_Out__outTexture);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetWeaponSymbolTexture(Z_Param__iconID,Z_Param_Out__outTexture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELUserProfileManager::execSetLastSelectedWeaponIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLastSelectedWeaponIndex(Z_Param__Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELUserProfileManager::execUpdateBadgeList)
	{
		P_GET_TARRAY(int32,Z_Param__badgeList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateBadgeList(Z_Param__badgeList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELUserProfileManager::execUpdatePlayerIcon)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__playerIconID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePlayerIcon(Z_Param__playerIconID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELUserProfileManager::execUpdatePlayerIconBg)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__iconID);
		P_GET_STRUCT(FUserProfileColorParam,Z_Param__Param);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePlayerIconBg(Z_Param__iconID,Z_Param__Param);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELUserProfileManager::execUpdateWeaponDecal)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__decalID);
		P_GET_STRUCT(FUserProfileColorParam,Z_Param__Param);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateWeaponDecal(Z_Param__decalID,Z_Param__Param);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELUserProfileManager::execUpdateWeaponSymbolIcon)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__iconID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateWeaponSymbolIcon(Z_Param__iconID);
		P_NATIVE_END;
	}
	void UELUserProfileManager::StaticRegisterNativesUELUserProfileManager()
	{
		UClass* Class = UELUserProfileManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplySaveDataToParam", &UELUserProfileManager::execApplySaveDataToParam },
			{ "GetBadgeList", &UELUserProfileManager::execGetBadgeList },
			{ "GetBadgeTexture", &UELUserProfileManager::execGetBadgeTexture },
			{ "GetLastSelectedWeaponIndex", &UELUserProfileManager::execGetLastSelectedWeaponIndex },
			{ "GetLinkageUnlockableItemID", &UELUserProfileManager::execGetLinkageUnlockableItemID },
			{ "GetMyWeaponDecalTexture", &UELUserProfileManager::execGetMyWeaponDecalTexture },
			{ "GetPlayerIcon", &UELUserProfileManager::execGetPlayerIcon },
			{ "GetPlayerIconBg", &UELUserProfileManager::execGetPlayerIconBg },
			{ "GetPlayerIconBgTexture", &UELUserProfileManager::execGetPlayerIconBgTexture },
			{ "GetPlayerIconTexture", &UELUserProfileManager::execGetPlayerIconTexture },
			{ "GetProfileColor", &UELUserProfileManager::execGetProfileColor },
			{ "GetWeaponDecal", &UELUserProfileManager::execGetWeaponDecal },
			{ "GetWeaponDecalTexture", &UELUserProfileManager::execGetWeaponDecalTexture },
			{ "GetWeaponDecalTextureAndColor", &UELUserProfileManager::execGetWeaponDecalTextureAndColor },
			{ "GetWeaponPlacementAt", &UELUserProfileManager::execGetWeaponPlacementAt },
			{ "GetWeaponPlacementInfoAt", &UELUserProfileManager::execGetWeaponPlacementInfoAt },
			{ "GetWeaponPlacementInfoNum", &UELUserProfileManager::execGetWeaponPlacementInfoNum },
			{ "GetWeaponSymbolIcon", &UELUserProfileManager::execGetWeaponSymbolIcon },
			{ "GetWeaponSymbolTexture", &UELUserProfileManager::execGetWeaponSymbolTexture },
			{ "SetLastSelectedWeaponIndex", &UELUserProfileManager::execSetLastSelectedWeaponIndex },
			{ "UpdateBadgeList", &UELUserProfileManager::execUpdateBadgeList },
			{ "UpdatePlayerIcon", &UELUserProfileManager::execUpdatePlayerIcon },
			{ "UpdatePlayerIconBg", &UELUserProfileManager::execUpdatePlayerIconBg },
			{ "UpdateWeaponDecal", &UELUserProfileManager::execUpdateWeaponDecal },
			{ "UpdateWeaponSymbolIcon", &UELUserProfileManager::execUpdateWeaponSymbolIcon },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELUserProfileManager_ApplySaveDataToParam_Statics
	{
		struct ELUserProfileManager_eventApplySaveDataToParam_Parms
		{
			USaveDataObject_PlayerData* _playerData;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__playerData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELUserProfileManager_ApplySaveDataToParam_Statics::NewProp__playerData = { "_playerData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserProfileManager_eventApplySaveDataToParam_Parms, _playerData), Z_Construct_UClass_USaveDataObject_PlayerData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELUserProfileManager_ApplySaveDataToParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileManager_ApplySaveDataToParam_Statics::NewProp__playerData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUserProfileManager_ApplySaveDataToParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELUserProfileManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELUserProfileManager_ApplySaveDataToParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELUserProfileManager, nullptr, "ApplySaveDataToParam", nullptr, nullptr, sizeof(ELUserProfileManager_eventApplySaveDataToParam_Parms), Z_Construct_UFunction_UELUserProfileManager_ApplySaveDataToParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserProfileManager_ApplySaveDataToParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELUserProfileManager_ApplySaveDataToParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserProfileManager_ApplySaveDataToParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELUserProfileManager_ApplySaveDataToParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELUserProfileManager_ApplySaveDataToParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELUserProfileManager_GetBadgeList_Statics
	{
		struct ELUserProfileManager_eventGetBadgeList_Parms
		{
			bool IsEditedBadge;
			TArray<int32> _outBadgeList;
		};
		static void NewProp_IsEditedBadge_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsEditedBadge;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__outBadgeList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__outBadgeList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELUserProfileManager_GetBadgeList_Statics::NewProp_IsEditedBadge_SetBit(void* Obj)
	{
		((ELUserProfileManager_eventGetBadgeList_Parms*)Obj)->IsEditedBadge = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELUserProfileManager_GetBadgeList_Statics::NewProp_IsEditedBadge = { "IsEditedBadge", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELUserProfileManager_eventGetBadgeList_Parms), &Z_Construct_UFunction_UELUserProfileManager_GetBadgeList_Statics::NewProp_IsEditedBadge_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELUserProfileManager_GetBadgeList_Statics::NewProp__outBadgeList_Inner = { "_outBadgeList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELUserProfileManager_GetBadgeList_Statics::NewProp__outBadgeList = { "_outBadgeList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserProfileManager_eventGetBadgeList_Parms, _outBadgeList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELUserProfileManager_GetBadgeList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileManager_GetBadgeList_Statics::NewProp_IsEditedBadge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileManager_GetBadgeList_Statics::NewProp__outBadgeList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileManager_GetBadgeList_Statics::NewProp__outBadgeList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUserProfileManager_GetBadgeList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELUserProfileManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELUserProfileManager_GetBadgeList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELUserProfileManager, nullptr, "GetBadgeList", nullptr, nullptr, sizeof(ELUserProfileManager_eventGetBadgeList_Parms), Z_Construct_UFunction_UELUserProfileManager_GetBadgeList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserProfileManager_GetBadgeList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELUserProfileManager_GetBadgeList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserProfileManager_GetBadgeList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELUserProfileManager_GetBadgeList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELUserProfileManager_GetBadgeList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELUserProfileManager_GetBadgeTexture_Statics
	{
		struct ELUserProfileManager_eventGetBadgeTexture_Parms
		{
			TArray<int32> _iconIdList;
			TArray<TSoftObjectPtr<UTexture2D> > _outTextureList;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__iconIdList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__iconIdList;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp__outTextureList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__outTextureList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELUserProfileManager_GetBadgeTexture_Statics::NewProp__iconIdList_Inner = { "_iconIdList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELUserProfileManager_GetBadgeTexture_Statics::NewProp__iconIdList = { "_iconIdList", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserProfileManager_eventGetBadgeTexture_Parms, _iconIdList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UELUserProfileManager_GetBadgeTexture_Statics::NewProp__outTextureList_Inner = { "_outTextureList", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELUserProfileManager_GetBadgeTexture_Statics::NewProp__outTextureList = { "_outTextureList", nullptr, (EPropertyFlags)0x0014000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserProfileManager_eventGetBadgeTexture_Parms, _outTextureList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELUserProfileManager_GetBadgeTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileManager_GetBadgeTexture_Statics::NewProp__iconIdList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileManager_GetBadgeTexture_Statics::NewProp__iconIdList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileManager_GetBadgeTexture_Statics::NewProp__outTextureList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileManager_GetBadgeTexture_Statics::NewProp__outTextureList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUserProfileManager_GetBadgeTexture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELUserProfileManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELUserProfileManager_GetBadgeTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELUserProfileManager, nullptr, "GetBadgeTexture", nullptr, nullptr, sizeof(ELUserProfileManager_eventGetBadgeTexture_Parms), Z_Construct_UFunction_UELUserProfileManager_GetBadgeTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserProfileManager_GetBadgeTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELUserProfileManager_GetBadgeTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserProfileManager_GetBadgeTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELUserProfileManager_GetBadgeTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELUserProfileManager_GetBadgeTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELUserProfileManager_GetLastSelectedWeaponIndex_Statics
	{
		struct ELUserProfileManager_eventGetLastSelectedWeaponIndex_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELUserProfileManager_GetLastSelectedWeaponIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserProfileManager_eventGetLastSelectedWeaponIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELUserProfileManager_GetLastSelectedWeaponIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileManager_GetLastSelectedWeaponIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUserProfileManager_GetLastSelectedWeaponIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELUserProfileManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELUserProfileManager_GetLastSelectedWeaponIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELUserProfileManager, nullptr, "GetLastSelectedWeaponIndex", nullptr, nullptr, sizeof(ELUserProfileManager_eventGetLastSelectedWeaponIndex_Parms), Z_Construct_UFunction_UELUserProfileManager_GetLastSelectedWeaponIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserProfileManager_GetLastSelectedWeaponIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELUserProfileManager_GetLastSelectedWeaponIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserProfileManager_GetLastSelectedWeaponIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELUserProfileManager_GetLastSelectedWeaponIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELUserProfileManager_GetLastSelectedWeaponIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELUserProfileManager_GetLinkageUnlockableItemID_Statics
	{
		struct ELUserProfileManager_eventGetLinkageUnlockableItemID_Parms
		{
			EUserProfileEditType _editType;
			int32 _checkItemID;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__editType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__editType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__checkItemID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELUserProfileManager_GetLinkageUnlockableItemID_Statics::NewProp__editType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELUserProfileManager_GetLinkageUnlockableItemID_Statics::NewProp__editType = { "_editType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserProfileManager_eventGetLinkageUnlockableItemID_Parms, _editType), Z_Construct_UEnum_ABP_200508_EUserProfileEditType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELUserProfileManager_GetLinkageUnlockableItemID_Statics::NewProp__checkItemID = { "_checkItemID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserProfileManager_eventGetLinkageUnlockableItemID_Parms, _checkItemID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELUserProfileManager_GetLinkageUnlockableItemID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserProfileManager_eventGetLinkageUnlockableItemID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELUserProfileManager_GetLinkageUnlockableItemID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileManager_GetLinkageUnlockableItemID_Statics::NewProp__editType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileManager_GetLinkageUnlockableItemID_Statics::NewProp__editType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileManager_GetLinkageUnlockableItemID_Statics::NewProp__checkItemID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileManager_GetLinkageUnlockableItemID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUserProfileManager_GetLinkageUnlockableItemID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELUserProfileManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELUserProfileManager_GetLinkageUnlockableItemID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELUserProfileManager, nullptr, "GetLinkageUnlockableItemID", nullptr, nullptr, sizeof(ELUserProfileManager_eventGetLinkageUnlockableItemID_Parms), Z_Construct_UFunction_UELUserProfileManager_GetLinkageUnlockableItemID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserProfileManager_GetLinkageUnlockableItemID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELUserProfileManager_GetLinkageUnlockableItemID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserProfileManager_GetLinkageUnlockableItemID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELUserProfileManager_GetLinkageUnlockableItemID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELUserProfileManager_GetLinkageUnlockableItemID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELUserProfileManager_GetMyWeaponDecalTexture_Statics
	{
		struct ELUserProfileManager_eventGetMyWeaponDecalTexture_Parms
		{
			bool _findAsset;
			UTexture2D* _outWeaponSymbolTex;
			UTexture2D* _outWeaponBgTex;
			FLinearColor _outColor;
		};
		static void NewProp__findAsset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__findAsset;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__outWeaponSymbolTex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__outWeaponBgTex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__outColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELUserProfileManager_GetMyWeaponDecalTexture_Statics::NewProp__findAsset_SetBit(void* Obj)
	{
		((ELUserProfileManager_eventGetMyWeaponDecalTexture_Parms*)Obj)->_findAsset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELUserProfileManager_GetMyWeaponDecalTexture_Statics::NewProp__findAsset = { "_findAsset", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELUserProfileManager_eventGetMyWeaponDecalTexture_Parms), &Z_Construct_UFunction_UELUserProfileManager_GetMyWeaponDecalTexture_Statics::NewProp__findAsset_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELUserProfileManager_GetMyWeaponDecalTexture_Statics::NewProp__outWeaponSymbolTex = { "_outWeaponSymbolTex", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserProfileManager_eventGetMyWeaponDecalTexture_Parms, _outWeaponSymbolTex), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELUserProfileManager_GetMyWeaponDecalTexture_Statics::NewProp__outWeaponBgTex = { "_outWeaponBgTex", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserProfileManager_eventGetMyWeaponDecalTexture_Parms, _outWeaponBgTex), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELUserProfileManager_GetMyWeaponDecalTexture_Statics::NewProp__outColor = { "_outColor", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserProfileManager_eventGetMyWeaponDecalTexture_Parms, _outColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELUserProfileManager_GetMyWeaponDecalTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileManager_GetMyWeaponDecalTexture_Statics::NewProp__findAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileManager_GetMyWeaponDecalTexture_Statics::NewProp__outWeaponSymbolTex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileManager_GetMyWeaponDecalTexture_Statics::NewProp__outWeaponBgTex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileManager_GetMyWeaponDecalTexture_Statics::NewProp__outColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUserProfileManager_GetMyWeaponDecalTexture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELUserProfileManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELUserProfileManager_GetMyWeaponDecalTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELUserProfileManager, nullptr, "GetMyWeaponDecalTexture", nullptr, nullptr, sizeof(ELUserProfileManager_eventGetMyWeaponDecalTexture_Parms), Z_Construct_UFunction_UELUserProfileManager_GetMyWeaponDecalTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserProfileManager_GetMyWeaponDecalTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELUserProfileManager_GetMyWeaponDecalTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserProfileManager_GetMyWeaponDecalTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELUserProfileManager_GetMyWeaponDecalTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELUserProfileManager_GetMyWeaponDecalTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELUserProfileManager_GetPlayerIcon_Statics
	{
		struct ELUserProfileManager_eventGetPlayerIcon_Parms
		{
			int32 _outPlayerIconID;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__outPlayerIconID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELUserProfileManager_GetPlayerIcon_Statics::NewProp__outPlayerIconID = { "_outPlayerIconID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserProfileManager_eventGetPlayerIcon_Parms, _outPlayerIconID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELUserProfileManager_GetPlayerIcon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileManager_GetPlayerIcon_Statics::NewProp__outPlayerIconID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUserProfileManager_GetPlayerIcon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELUserProfileManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELUserProfileManager_GetPlayerIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELUserProfileManager, nullptr, "GetPlayerIcon", nullptr, nullptr, sizeof(ELUserProfileManager_eventGetPlayerIcon_Parms), Z_Construct_UFunction_UELUserProfileManager_GetPlayerIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserProfileManager_GetPlayerIcon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELUserProfileManager_GetPlayerIcon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserProfileManager_GetPlayerIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELUserProfileManager_GetPlayerIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELUserProfileManager_GetPlayerIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELUserProfileManager_GetPlayerIconBg_Statics
	{
		struct ELUserProfileManager_eventGetPlayerIconBg_Parms
		{
			int32 _outIconID;
			FUserProfileColorParam _outColorParam;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__outIconID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__outColorParam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELUserProfileManager_GetPlayerIconBg_Statics::NewProp__outIconID = { "_outIconID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserProfileManager_eventGetPlayerIconBg_Parms, _outIconID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELUserProfileManager_GetPlayerIconBg_Statics::NewProp__outColorParam = { "_outColorParam", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserProfileManager_eventGetPlayerIconBg_Parms, _outColorParam), Z_Construct_UScriptStruct_FUserProfileColorParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELUserProfileManager_GetPlayerIconBg_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileManager_GetPlayerIconBg_Statics::NewProp__outIconID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileManager_GetPlayerIconBg_Statics::NewProp__outColorParam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUserProfileManager_GetPlayerIconBg_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELUserProfileManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELUserProfileManager_GetPlayerIconBg_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELUserProfileManager, nullptr, "GetPlayerIconBg", nullptr, nullptr, sizeof(ELUserProfileManager_eventGetPlayerIconBg_Parms), Z_Construct_UFunction_UELUserProfileManager_GetPlayerIconBg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserProfileManager_GetPlayerIconBg_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELUserProfileManager_GetPlayerIconBg_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserProfileManager_GetPlayerIconBg_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELUserProfileManager_GetPlayerIconBg()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELUserProfileManager_GetPlayerIconBg_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELUserProfileManager_GetPlayerIconBgTexture_Statics
	{
		struct ELUserProfileManager_eventGetPlayerIconBgTexture_Parms
		{
			int32 _iconID;
			TSoftObjectPtr<UTexture2D> _outTexture;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__iconID;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp__outTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELUserProfileManager_GetPlayerIconBgTexture_Statics::NewProp__iconID = { "_iconID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserProfileManager_eventGetPlayerIconBgTexture_Parms, _iconID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UELUserProfileManager_GetPlayerIconBgTexture_Statics::NewProp__outTexture = { "_outTexture", nullptr, (EPropertyFlags)0x0014000000000180, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserProfileManager_eventGetPlayerIconBgTexture_Parms, _outTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELUserProfileManager_GetPlayerIconBgTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileManager_GetPlayerIconBgTexture_Statics::NewProp__iconID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileManager_GetPlayerIconBgTexture_Statics::NewProp__outTexture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUserProfileManager_GetPlayerIconBgTexture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELUserProfileManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELUserProfileManager_GetPlayerIconBgTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELUserProfileManager, nullptr, "GetPlayerIconBgTexture", nullptr, nullptr, sizeof(ELUserProfileManager_eventGetPlayerIconBgTexture_Parms), Z_Construct_UFunction_UELUserProfileManager_GetPlayerIconBgTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserProfileManager_GetPlayerIconBgTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELUserProfileManager_GetPlayerIconBgTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserProfileManager_GetPlayerIconBgTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELUserProfileManager_GetPlayerIconBgTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELUserProfileManager_GetPlayerIconBgTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELUserProfileManager_GetPlayerIconTexture_Statics
	{
		struct ELUserProfileManager_eventGetPlayerIconTexture_Parms
		{
			int32 _iconID;
			TSoftObjectPtr<UTexture2D> _outTexture;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__iconID;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp__outTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELUserProfileManager_GetPlayerIconTexture_Statics::NewProp__iconID = { "_iconID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserProfileManager_eventGetPlayerIconTexture_Parms, _iconID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UELUserProfileManager_GetPlayerIconTexture_Statics::NewProp__outTexture = { "_outTexture", nullptr, (EPropertyFlags)0x0014000000000180, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserProfileManager_eventGetPlayerIconTexture_Parms, _outTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELUserProfileManager_GetPlayerIconTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileManager_GetPlayerIconTexture_Statics::NewProp__iconID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileManager_GetPlayerIconTexture_Statics::NewProp__outTexture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUserProfileManager_GetPlayerIconTexture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELUserProfileManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELUserProfileManager_GetPlayerIconTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELUserProfileManager, nullptr, "GetPlayerIconTexture", nullptr, nullptr, sizeof(ELUserProfileManager_eventGetPlayerIconTexture_Parms), Z_Construct_UFunction_UELUserProfileManager_GetPlayerIconTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserProfileManager_GetPlayerIconTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELUserProfileManager_GetPlayerIconTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserProfileManager_GetPlayerIconTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELUserProfileManager_GetPlayerIconTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELUserProfileManager_GetPlayerIconTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELUserProfileManager_GetProfileColor_Statics
	{
		struct ELUserProfileManager_eventGetProfileColor_Parms
		{
			int32 _colorID;
			int32 _colorListIndex;
			EUserProfileEditType _editType;
			FLinearColor _outColor;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__colorID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__colorListIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__editType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__editType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__outColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELUserProfileManager_GetProfileColor_Statics::NewProp__colorID = { "_colorID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserProfileManager_eventGetProfileColor_Parms, _colorID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELUserProfileManager_GetProfileColor_Statics::NewProp__colorListIndex = { "_colorListIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserProfileManager_eventGetProfileColor_Parms, _colorListIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELUserProfileManager_GetProfileColor_Statics::NewProp__editType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELUserProfileManager_GetProfileColor_Statics::NewProp__editType = { "_editType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserProfileManager_eventGetProfileColor_Parms, _editType), Z_Construct_UEnum_ABP_200508_EUserProfileEditType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELUserProfileManager_GetProfileColor_Statics::NewProp__outColor = { "_outColor", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserProfileManager_eventGetProfileColor_Parms, _outColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELUserProfileManager_GetProfileColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileManager_GetProfileColor_Statics::NewProp__colorID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileManager_GetProfileColor_Statics::NewProp__colorListIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileManager_GetProfileColor_Statics::NewProp__editType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileManager_GetProfileColor_Statics::NewProp__editType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileManager_GetProfileColor_Statics::NewProp__outColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUserProfileManager_GetProfileColor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELUserProfileManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELUserProfileManager_GetProfileColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELUserProfileManager, nullptr, "GetProfileColor", nullptr, nullptr, sizeof(ELUserProfileManager_eventGetProfileColor_Parms), Z_Construct_UFunction_UELUserProfileManager_GetProfileColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserProfileManager_GetProfileColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELUserProfileManager_GetProfileColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserProfileManager_GetProfileColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELUserProfileManager_GetProfileColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELUserProfileManager_GetProfileColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELUserProfileManager_GetWeaponDecal_Statics
	{
		struct ELUserProfileManager_eventGetWeaponDecal_Parms
		{
			int32 _outDecalID;
			int32 _outDecalSymboiID;
			FUserProfileColorParam _outColorParam;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__outDecalID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__outDecalSymboiID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__outColorParam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELUserProfileManager_GetWeaponDecal_Statics::NewProp__outDecalID = { "_outDecalID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserProfileManager_eventGetWeaponDecal_Parms, _outDecalID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELUserProfileManager_GetWeaponDecal_Statics::NewProp__outDecalSymboiID = { "_outDecalSymboiID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserProfileManager_eventGetWeaponDecal_Parms, _outDecalSymboiID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELUserProfileManager_GetWeaponDecal_Statics::NewProp__outColorParam = { "_outColorParam", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserProfileManager_eventGetWeaponDecal_Parms, _outColorParam), Z_Construct_UScriptStruct_FUserProfileColorParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELUserProfileManager_GetWeaponDecal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileManager_GetWeaponDecal_Statics::NewProp__outDecalID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileManager_GetWeaponDecal_Statics::NewProp__outDecalSymboiID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileManager_GetWeaponDecal_Statics::NewProp__outColorParam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUserProfileManager_GetWeaponDecal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELUserProfileManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELUserProfileManager_GetWeaponDecal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELUserProfileManager, nullptr, "GetWeaponDecal", nullptr, nullptr, sizeof(ELUserProfileManager_eventGetWeaponDecal_Parms), Z_Construct_UFunction_UELUserProfileManager_GetWeaponDecal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserProfileManager_GetWeaponDecal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELUserProfileManager_GetWeaponDecal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserProfileManager_GetWeaponDecal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELUserProfileManager_GetWeaponDecal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELUserProfileManager_GetWeaponDecal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELUserProfileManager_GetWeaponDecalTexture_Statics
	{
		struct ELUserProfileManager_eventGetWeaponDecalTexture_Parms
		{
			int32 _iconID;
			TSoftObjectPtr<UTexture2D> _outTexture;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__iconID;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp__outTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELUserProfileManager_GetWeaponDecalTexture_Statics::NewProp__iconID = { "_iconID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserProfileManager_eventGetWeaponDecalTexture_Parms, _iconID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UELUserProfileManager_GetWeaponDecalTexture_Statics::NewProp__outTexture = { "_outTexture", nullptr, (EPropertyFlags)0x0014000000000180, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserProfileManager_eventGetWeaponDecalTexture_Parms, _outTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELUserProfileManager_GetWeaponDecalTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileManager_GetWeaponDecalTexture_Statics::NewProp__iconID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileManager_GetWeaponDecalTexture_Statics::NewProp__outTexture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUserProfileManager_GetWeaponDecalTexture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELUserProfileManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELUserProfileManager_GetWeaponDecalTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELUserProfileManager, nullptr, "GetWeaponDecalTexture", nullptr, nullptr, sizeof(ELUserProfileManager_eventGetWeaponDecalTexture_Parms), Z_Construct_UFunction_UELUserProfileManager_GetWeaponDecalTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserProfileManager_GetWeaponDecalTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELUserProfileManager_GetWeaponDecalTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserProfileManager_GetWeaponDecalTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELUserProfileManager_GetWeaponDecalTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELUserProfileManager_GetWeaponDecalTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELUserProfileManager_GetWeaponDecalTextureAndColor_Statics
	{
		struct ELUserProfileManager_eventGetWeaponDecalTextureAndColor_Parms
		{
			int32 _iconID;
			int32 _symbolID;
			int32 _colorID;
			int32 _colorListIndex;
			TSoftObjectPtr<UTexture2D> _outTexture;
			TSoftObjectPtr<UTexture2D> _outSymbolTexture;
			FLinearColor _outColor;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__iconID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__symbolID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__colorID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__colorListIndex;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp__outTexture;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp__outSymbolTexture;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__outColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELUserProfileManager_GetWeaponDecalTextureAndColor_Statics::NewProp__iconID = { "_iconID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserProfileManager_eventGetWeaponDecalTextureAndColor_Parms, _iconID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELUserProfileManager_GetWeaponDecalTextureAndColor_Statics::NewProp__symbolID = { "_symbolID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserProfileManager_eventGetWeaponDecalTextureAndColor_Parms, _symbolID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELUserProfileManager_GetWeaponDecalTextureAndColor_Statics::NewProp__colorID = { "_colorID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserProfileManager_eventGetWeaponDecalTextureAndColor_Parms, _colorID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELUserProfileManager_GetWeaponDecalTextureAndColor_Statics::NewProp__colorListIndex = { "_colorListIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserProfileManager_eventGetWeaponDecalTextureAndColor_Parms, _colorListIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UELUserProfileManager_GetWeaponDecalTextureAndColor_Statics::NewProp__outTexture = { "_outTexture", nullptr, (EPropertyFlags)0x0014000000000180, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserProfileManager_eventGetWeaponDecalTextureAndColor_Parms, _outTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UELUserProfileManager_GetWeaponDecalTextureAndColor_Statics::NewProp__outSymbolTexture = { "_outSymbolTexture", nullptr, (EPropertyFlags)0x0014000000000180, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserProfileManager_eventGetWeaponDecalTextureAndColor_Parms, _outSymbolTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELUserProfileManager_GetWeaponDecalTextureAndColor_Statics::NewProp__outColor = { "_outColor", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserProfileManager_eventGetWeaponDecalTextureAndColor_Parms, _outColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELUserProfileManager_GetWeaponDecalTextureAndColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileManager_GetWeaponDecalTextureAndColor_Statics::NewProp__iconID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileManager_GetWeaponDecalTextureAndColor_Statics::NewProp__symbolID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileManager_GetWeaponDecalTextureAndColor_Statics::NewProp__colorID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileManager_GetWeaponDecalTextureAndColor_Statics::NewProp__colorListIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileManager_GetWeaponDecalTextureAndColor_Statics::NewProp__outTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileManager_GetWeaponDecalTextureAndColor_Statics::NewProp__outSymbolTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileManager_GetWeaponDecalTextureAndColor_Statics::NewProp__outColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUserProfileManager_GetWeaponDecalTextureAndColor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELUserProfileManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELUserProfileManager_GetWeaponDecalTextureAndColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELUserProfileManager, nullptr, "GetWeaponDecalTextureAndColor", nullptr, nullptr, sizeof(ELUserProfileManager_eventGetWeaponDecalTextureAndColor_Parms), Z_Construct_UFunction_UELUserProfileManager_GetWeaponDecalTextureAndColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserProfileManager_GetWeaponDecalTextureAndColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELUserProfileManager_GetWeaponDecalTextureAndColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserProfileManager_GetWeaponDecalTextureAndColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELUserProfileManager_GetWeaponDecalTextureAndColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELUserProfileManager_GetWeaponDecalTextureAndColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELUserProfileManager_GetWeaponPlacementAt_Statics
	{
		struct ELUserProfileManager_eventGetWeaponPlacementAt_Parms
		{
			int32 _Index;
			FTransform _outTransform;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__Index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__outTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELUserProfileManager_GetWeaponPlacementAt_Statics::NewProp__Index = { "_Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserProfileManager_eventGetWeaponPlacementAt_Parms, _Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELUserProfileManager_GetWeaponPlacementAt_Statics::NewProp__outTransform = { "_outTransform", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserProfileManager_eventGetWeaponPlacementAt_Parms, _outTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELUserProfileManager_GetWeaponPlacementAt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileManager_GetWeaponPlacementAt_Statics::NewProp__Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileManager_GetWeaponPlacementAt_Statics::NewProp__outTransform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUserProfileManager_GetWeaponPlacementAt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELUserProfileManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELUserProfileManager_GetWeaponPlacementAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELUserProfileManager, nullptr, "GetWeaponPlacementAt", nullptr, nullptr, sizeof(ELUserProfileManager_eventGetWeaponPlacementAt_Parms), Z_Construct_UFunction_UELUserProfileManager_GetWeaponPlacementAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserProfileManager_GetWeaponPlacementAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELUserProfileManager_GetWeaponPlacementAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserProfileManager_GetWeaponPlacementAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELUserProfileManager_GetWeaponPlacementAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELUserProfileManager_GetWeaponPlacementAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELUserProfileManager_GetWeaponPlacementInfoAt_Statics
	{
		struct ELUserProfileManager_eventGetWeaponPlacementInfoAt_Parms
		{
			int32 _Index;
			FUserProfileWeaponPlacementInfo _outInfo;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__Index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__outInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELUserProfileManager_GetWeaponPlacementInfoAt_Statics::NewProp__Index = { "_Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserProfileManager_eventGetWeaponPlacementInfoAt_Parms, _Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELUserProfileManager_GetWeaponPlacementInfoAt_Statics::NewProp__outInfo = { "_outInfo", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserProfileManager_eventGetWeaponPlacementInfoAt_Parms, _outInfo), Z_Construct_UScriptStruct_FUserProfileWeaponPlacementInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELUserProfileManager_GetWeaponPlacementInfoAt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileManager_GetWeaponPlacementInfoAt_Statics::NewProp__Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileManager_GetWeaponPlacementInfoAt_Statics::NewProp__outInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUserProfileManager_GetWeaponPlacementInfoAt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELUserProfileManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELUserProfileManager_GetWeaponPlacementInfoAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELUserProfileManager, nullptr, "GetWeaponPlacementInfoAt", nullptr, nullptr, sizeof(ELUserProfileManager_eventGetWeaponPlacementInfoAt_Parms), Z_Construct_UFunction_UELUserProfileManager_GetWeaponPlacementInfoAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserProfileManager_GetWeaponPlacementInfoAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELUserProfileManager_GetWeaponPlacementInfoAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserProfileManager_GetWeaponPlacementInfoAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELUserProfileManager_GetWeaponPlacementInfoAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELUserProfileManager_GetWeaponPlacementInfoAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELUserProfileManager_GetWeaponPlacementInfoNum_Statics
	{
		struct ELUserProfileManager_eventGetWeaponPlacementInfoNum_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELUserProfileManager_GetWeaponPlacementInfoNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserProfileManager_eventGetWeaponPlacementInfoNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELUserProfileManager_GetWeaponPlacementInfoNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileManager_GetWeaponPlacementInfoNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUserProfileManager_GetWeaponPlacementInfoNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELUserProfileManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELUserProfileManager_GetWeaponPlacementInfoNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELUserProfileManager, nullptr, "GetWeaponPlacementInfoNum", nullptr, nullptr, sizeof(ELUserProfileManager_eventGetWeaponPlacementInfoNum_Parms), Z_Construct_UFunction_UELUserProfileManager_GetWeaponPlacementInfoNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserProfileManager_GetWeaponPlacementInfoNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELUserProfileManager_GetWeaponPlacementInfoNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserProfileManager_GetWeaponPlacementInfoNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELUserProfileManager_GetWeaponPlacementInfoNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELUserProfileManager_GetWeaponPlacementInfoNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELUserProfileManager_GetWeaponSymbolIcon_Statics
	{
		struct ELUserProfileManager_eventGetWeaponSymbolIcon_Parms
		{
			int32 _outSymbolIconID;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__outSymbolIconID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELUserProfileManager_GetWeaponSymbolIcon_Statics::NewProp__outSymbolIconID = { "_outSymbolIconID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserProfileManager_eventGetWeaponSymbolIcon_Parms, _outSymbolIconID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELUserProfileManager_GetWeaponSymbolIcon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileManager_GetWeaponSymbolIcon_Statics::NewProp__outSymbolIconID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUserProfileManager_GetWeaponSymbolIcon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELUserProfileManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELUserProfileManager_GetWeaponSymbolIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELUserProfileManager, nullptr, "GetWeaponSymbolIcon", nullptr, nullptr, sizeof(ELUserProfileManager_eventGetWeaponSymbolIcon_Parms), Z_Construct_UFunction_UELUserProfileManager_GetWeaponSymbolIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserProfileManager_GetWeaponSymbolIcon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELUserProfileManager_GetWeaponSymbolIcon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserProfileManager_GetWeaponSymbolIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELUserProfileManager_GetWeaponSymbolIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELUserProfileManager_GetWeaponSymbolIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELUserProfileManager_GetWeaponSymbolTexture_Statics
	{
		struct ELUserProfileManager_eventGetWeaponSymbolTexture_Parms
		{
			int32 _iconID;
			TSoftObjectPtr<UTexture2D> _outTexture;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__iconID;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp__outTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELUserProfileManager_GetWeaponSymbolTexture_Statics::NewProp__iconID = { "_iconID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserProfileManager_eventGetWeaponSymbolTexture_Parms, _iconID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UELUserProfileManager_GetWeaponSymbolTexture_Statics::NewProp__outTexture = { "_outTexture", nullptr, (EPropertyFlags)0x0014000000000180, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserProfileManager_eventGetWeaponSymbolTexture_Parms, _outTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELUserProfileManager_GetWeaponSymbolTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileManager_GetWeaponSymbolTexture_Statics::NewProp__iconID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileManager_GetWeaponSymbolTexture_Statics::NewProp__outTexture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUserProfileManager_GetWeaponSymbolTexture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELUserProfileManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELUserProfileManager_GetWeaponSymbolTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELUserProfileManager, nullptr, "GetWeaponSymbolTexture", nullptr, nullptr, sizeof(ELUserProfileManager_eventGetWeaponSymbolTexture_Parms), Z_Construct_UFunction_UELUserProfileManager_GetWeaponSymbolTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserProfileManager_GetWeaponSymbolTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELUserProfileManager_GetWeaponSymbolTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserProfileManager_GetWeaponSymbolTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELUserProfileManager_GetWeaponSymbolTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELUserProfileManager_GetWeaponSymbolTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELUserProfileManager_SetLastSelectedWeaponIndex_Statics
	{
		struct ELUserProfileManager_eventSetLastSelectedWeaponIndex_Parms
		{
			int32 _Index;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELUserProfileManager_SetLastSelectedWeaponIndex_Statics::NewProp__Index = { "_Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserProfileManager_eventSetLastSelectedWeaponIndex_Parms, _Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELUserProfileManager_SetLastSelectedWeaponIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileManager_SetLastSelectedWeaponIndex_Statics::NewProp__Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUserProfileManager_SetLastSelectedWeaponIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELUserProfileManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELUserProfileManager_SetLastSelectedWeaponIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELUserProfileManager, nullptr, "SetLastSelectedWeaponIndex", nullptr, nullptr, sizeof(ELUserProfileManager_eventSetLastSelectedWeaponIndex_Parms), Z_Construct_UFunction_UELUserProfileManager_SetLastSelectedWeaponIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserProfileManager_SetLastSelectedWeaponIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELUserProfileManager_SetLastSelectedWeaponIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserProfileManager_SetLastSelectedWeaponIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELUserProfileManager_SetLastSelectedWeaponIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELUserProfileManager_SetLastSelectedWeaponIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELUserProfileManager_UpdateBadgeList_Statics
	{
		struct ELUserProfileManager_eventUpdateBadgeList_Parms
		{
			TArray<int32> _badgeList;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__badgeList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__badgeList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELUserProfileManager_UpdateBadgeList_Statics::NewProp__badgeList_Inner = { "_badgeList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELUserProfileManager_UpdateBadgeList_Statics::NewProp__badgeList = { "_badgeList", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserProfileManager_eventUpdateBadgeList_Parms, _badgeList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELUserProfileManager_UpdateBadgeList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileManager_UpdateBadgeList_Statics::NewProp__badgeList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileManager_UpdateBadgeList_Statics::NewProp__badgeList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUserProfileManager_UpdateBadgeList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELUserProfileManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELUserProfileManager_UpdateBadgeList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELUserProfileManager, nullptr, "UpdateBadgeList", nullptr, nullptr, sizeof(ELUserProfileManager_eventUpdateBadgeList_Parms), Z_Construct_UFunction_UELUserProfileManager_UpdateBadgeList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserProfileManager_UpdateBadgeList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELUserProfileManager_UpdateBadgeList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserProfileManager_UpdateBadgeList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELUserProfileManager_UpdateBadgeList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELUserProfileManager_UpdateBadgeList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELUserProfileManager_UpdatePlayerIcon_Statics
	{
		struct ELUserProfileManager_eventUpdatePlayerIcon_Parms
		{
			int32 _playerIconID;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__playerIconID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELUserProfileManager_UpdatePlayerIcon_Statics::NewProp__playerIconID = { "_playerIconID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserProfileManager_eventUpdatePlayerIcon_Parms, _playerIconID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELUserProfileManager_UpdatePlayerIcon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileManager_UpdatePlayerIcon_Statics::NewProp__playerIconID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUserProfileManager_UpdatePlayerIcon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELUserProfileManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELUserProfileManager_UpdatePlayerIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELUserProfileManager, nullptr, "UpdatePlayerIcon", nullptr, nullptr, sizeof(ELUserProfileManager_eventUpdatePlayerIcon_Parms), Z_Construct_UFunction_UELUserProfileManager_UpdatePlayerIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserProfileManager_UpdatePlayerIcon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELUserProfileManager_UpdatePlayerIcon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserProfileManager_UpdatePlayerIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELUserProfileManager_UpdatePlayerIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELUserProfileManager_UpdatePlayerIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELUserProfileManager_UpdatePlayerIconBg_Statics
	{
		struct ELUserProfileManager_eventUpdatePlayerIconBg_Parms
		{
			int32 _iconID;
			FUserProfileColorParam _Param;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__iconID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__Param;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELUserProfileManager_UpdatePlayerIconBg_Statics::NewProp__iconID = { "_iconID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserProfileManager_eventUpdatePlayerIconBg_Parms, _iconID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELUserProfileManager_UpdatePlayerIconBg_Statics::NewProp__Param = { "_Param", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserProfileManager_eventUpdatePlayerIconBg_Parms, _Param), Z_Construct_UScriptStruct_FUserProfileColorParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELUserProfileManager_UpdatePlayerIconBg_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileManager_UpdatePlayerIconBg_Statics::NewProp__iconID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileManager_UpdatePlayerIconBg_Statics::NewProp__Param,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUserProfileManager_UpdatePlayerIconBg_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELUserProfileManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELUserProfileManager_UpdatePlayerIconBg_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELUserProfileManager, nullptr, "UpdatePlayerIconBg", nullptr, nullptr, sizeof(ELUserProfileManager_eventUpdatePlayerIconBg_Parms), Z_Construct_UFunction_UELUserProfileManager_UpdatePlayerIconBg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserProfileManager_UpdatePlayerIconBg_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELUserProfileManager_UpdatePlayerIconBg_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserProfileManager_UpdatePlayerIconBg_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELUserProfileManager_UpdatePlayerIconBg()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELUserProfileManager_UpdatePlayerIconBg_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELUserProfileManager_UpdateWeaponDecal_Statics
	{
		struct ELUserProfileManager_eventUpdateWeaponDecal_Parms
		{
			int32 _decalID;
			FUserProfileColorParam _Param;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__decalID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__Param;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELUserProfileManager_UpdateWeaponDecal_Statics::NewProp__decalID = { "_decalID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserProfileManager_eventUpdateWeaponDecal_Parms, _decalID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELUserProfileManager_UpdateWeaponDecal_Statics::NewProp__Param = { "_Param", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserProfileManager_eventUpdateWeaponDecal_Parms, _Param), Z_Construct_UScriptStruct_FUserProfileColorParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELUserProfileManager_UpdateWeaponDecal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileManager_UpdateWeaponDecal_Statics::NewProp__decalID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileManager_UpdateWeaponDecal_Statics::NewProp__Param,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUserProfileManager_UpdateWeaponDecal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELUserProfileManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELUserProfileManager_UpdateWeaponDecal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELUserProfileManager, nullptr, "UpdateWeaponDecal", nullptr, nullptr, sizeof(ELUserProfileManager_eventUpdateWeaponDecal_Parms), Z_Construct_UFunction_UELUserProfileManager_UpdateWeaponDecal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserProfileManager_UpdateWeaponDecal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELUserProfileManager_UpdateWeaponDecal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserProfileManager_UpdateWeaponDecal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELUserProfileManager_UpdateWeaponDecal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELUserProfileManager_UpdateWeaponDecal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELUserProfileManager_UpdateWeaponSymbolIcon_Statics
	{
		struct ELUserProfileManager_eventUpdateWeaponSymbolIcon_Parms
		{
			int32 _iconID;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__iconID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELUserProfileManager_UpdateWeaponSymbolIcon_Statics::NewProp__iconID = { "_iconID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserProfileManager_eventUpdateWeaponSymbolIcon_Parms, _iconID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELUserProfileManager_UpdateWeaponSymbolIcon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserProfileManager_UpdateWeaponSymbolIcon_Statics::NewProp__iconID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUserProfileManager_UpdateWeaponSymbolIcon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELUserProfileManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELUserProfileManager_UpdateWeaponSymbolIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELUserProfileManager, nullptr, "UpdateWeaponSymbolIcon", nullptr, nullptr, sizeof(ELUserProfileManager_eventUpdateWeaponSymbolIcon_Parms), Z_Construct_UFunction_UELUserProfileManager_UpdateWeaponSymbolIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserProfileManager_UpdateWeaponSymbolIcon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELUserProfileManager_UpdateWeaponSymbolIcon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserProfileManager_UpdateWeaponSymbolIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELUserProfileManager_UpdateWeaponSymbolIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELUserProfileManager_UpdateWeaponSymbolIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELUserProfileManager_NoRegister()
	{
		return UELUserProfileManager::StaticClass();
	}
	struct Z_Construct_UClass_UELUserProfileManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_PlayerIconRefMap_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_PlayerIconRefMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_PlayerIconRefMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_PlayerIconRefMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_PlayerIconBgRefMap_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_PlayerIconBgRefMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_PlayerIconBgRefMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_PlayerIconBgRefMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_BadgeRefMap_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_BadgeRefMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_BadgeRefMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_BadgeRefMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_WeaponDecalRefMap_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_WeaponDecalRefMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_WeaponDecalRefMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_WeaponDecalRefMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_WeaponPlacements_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_WeaponPlacements_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_WeaponPlacements;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_WeaponSymbolIconRefMap_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_WeaponSymbolIconRefMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_WeaponSymbolIconRefMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_WeaponSymbolIconRefMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELUserProfileManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELUserProfileManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELUserProfileManager_ApplySaveDataToParam, "ApplySaveDataToParam" }, // 3698275348
		{ &Z_Construct_UFunction_UELUserProfileManager_GetBadgeList, "GetBadgeList" }, // 2628366758
		{ &Z_Construct_UFunction_UELUserProfileManager_GetBadgeTexture, "GetBadgeTexture" }, // 3146768910
		{ &Z_Construct_UFunction_UELUserProfileManager_GetLastSelectedWeaponIndex, "GetLastSelectedWeaponIndex" }, // 4103956924
		{ &Z_Construct_UFunction_UELUserProfileManager_GetLinkageUnlockableItemID, "GetLinkageUnlockableItemID" }, // 896556
		{ &Z_Construct_UFunction_UELUserProfileManager_GetMyWeaponDecalTexture, "GetMyWeaponDecalTexture" }, // 1172464971
		{ &Z_Construct_UFunction_UELUserProfileManager_GetPlayerIcon, "GetPlayerIcon" }, // 3497398672
		{ &Z_Construct_UFunction_UELUserProfileManager_GetPlayerIconBg, "GetPlayerIconBg" }, // 2135583434
		{ &Z_Construct_UFunction_UELUserProfileManager_GetPlayerIconBgTexture, "GetPlayerIconBgTexture" }, // 308839387
		{ &Z_Construct_UFunction_UELUserProfileManager_GetPlayerIconTexture, "GetPlayerIconTexture" }, // 4066831335
		{ &Z_Construct_UFunction_UELUserProfileManager_GetProfileColor, "GetProfileColor" }, // 2336079637
		{ &Z_Construct_UFunction_UELUserProfileManager_GetWeaponDecal, "GetWeaponDecal" }, // 2545013677
		{ &Z_Construct_UFunction_UELUserProfileManager_GetWeaponDecalTexture, "GetWeaponDecalTexture" }, // 1997096934
		{ &Z_Construct_UFunction_UELUserProfileManager_GetWeaponDecalTextureAndColor, "GetWeaponDecalTextureAndColor" }, // 1542726888
		{ &Z_Construct_UFunction_UELUserProfileManager_GetWeaponPlacementAt, "GetWeaponPlacementAt" }, // 1521771491
		{ &Z_Construct_UFunction_UELUserProfileManager_GetWeaponPlacementInfoAt, "GetWeaponPlacementInfoAt" }, // 2882399767
		{ &Z_Construct_UFunction_UELUserProfileManager_GetWeaponPlacementInfoNum, "GetWeaponPlacementInfoNum" }, // 328884947
		{ &Z_Construct_UFunction_UELUserProfileManager_GetWeaponSymbolIcon, "GetWeaponSymbolIcon" }, // 3210507256
		{ &Z_Construct_UFunction_UELUserProfileManager_GetWeaponSymbolTexture, "GetWeaponSymbolTexture" }, // 291581826
		{ &Z_Construct_UFunction_UELUserProfileManager_SetLastSelectedWeaponIndex, "SetLastSelectedWeaponIndex" }, // 3087018249
		{ &Z_Construct_UFunction_UELUserProfileManager_UpdateBadgeList, "UpdateBadgeList" }, // 412772765
		{ &Z_Construct_UFunction_UELUserProfileManager_UpdatePlayerIcon, "UpdatePlayerIcon" }, // 896757188
		{ &Z_Construct_UFunction_UELUserProfileManager_UpdatePlayerIconBg, "UpdatePlayerIconBg" }, // 4139144218
		{ &Z_Construct_UFunction_UELUserProfileManager_UpdateWeaponDecal, "UpdateWeaponDecal" }, // 1660730705
		{ &Z_Construct_UFunction_UELUserProfileManager_UpdateWeaponSymbolIcon, "UpdateWeaponSymbolIcon" }, // 1336705030
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELUserProfileManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELUserProfileManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELUserProfileManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELUserProfileManager_Statics::NewProp_m_PlayerIconRefMap_ValueProp = { "m_PlayerIconRefMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FUserProfileUserIconInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELUserProfileManager_Statics::NewProp_m_PlayerIconRefMap_Key_KeyProp = { "m_PlayerIconRefMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELUserProfileManager_Statics::NewProp_m_PlayerIconRefMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELUserProfileManager" },
		{ "ModuleRelativePath", "Public/ELUserProfileManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UELUserProfileManager_Statics::NewProp_m_PlayerIconRefMap = { "m_PlayerIconRefMap", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELUserProfileManager, m_PlayerIconRefMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELUserProfileManager_Statics::NewProp_m_PlayerIconRefMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELUserProfileManager_Statics::NewProp_m_PlayerIconRefMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELUserProfileManager_Statics::NewProp_m_PlayerIconBgRefMap_ValueProp = { "m_PlayerIconBgRefMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FUserProfileUserIconBgInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELUserProfileManager_Statics::NewProp_m_PlayerIconBgRefMap_Key_KeyProp = { "m_PlayerIconBgRefMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELUserProfileManager_Statics::NewProp_m_PlayerIconBgRefMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELUserProfileManager" },
		{ "ModuleRelativePath", "Public/ELUserProfileManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UELUserProfileManager_Statics::NewProp_m_PlayerIconBgRefMap = { "m_PlayerIconBgRefMap", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELUserProfileManager, m_PlayerIconBgRefMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELUserProfileManager_Statics::NewProp_m_PlayerIconBgRefMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELUserProfileManager_Statics::NewProp_m_PlayerIconBgRefMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELUserProfileManager_Statics::NewProp_m_BadgeRefMap_ValueProp = { "m_BadgeRefMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FUserProfileBadgeInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELUserProfileManager_Statics::NewProp_m_BadgeRefMap_Key_KeyProp = { "m_BadgeRefMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELUserProfileManager_Statics::NewProp_m_BadgeRefMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELUserProfileManager" },
		{ "ModuleRelativePath", "Public/ELUserProfileManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UELUserProfileManager_Statics::NewProp_m_BadgeRefMap = { "m_BadgeRefMap", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELUserProfileManager, m_BadgeRefMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELUserProfileManager_Statics::NewProp_m_BadgeRefMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELUserProfileManager_Statics::NewProp_m_BadgeRefMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELUserProfileManager_Statics::NewProp_m_WeaponDecalRefMap_ValueProp = { "m_WeaponDecalRefMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FUserProfileWeaponDecalInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELUserProfileManager_Statics::NewProp_m_WeaponDecalRefMap_Key_KeyProp = { "m_WeaponDecalRefMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELUserProfileManager_Statics::NewProp_m_WeaponDecalRefMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELUserProfileManager" },
		{ "ModuleRelativePath", "Public/ELUserProfileManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UELUserProfileManager_Statics::NewProp_m_WeaponDecalRefMap = { "m_WeaponDecalRefMap", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELUserProfileManager, m_WeaponDecalRefMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELUserProfileManager_Statics::NewProp_m_WeaponDecalRefMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELUserProfileManager_Statics::NewProp_m_WeaponDecalRefMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELUserProfileManager_Statics::NewProp_m_WeaponPlacements_Inner = { "m_WeaponPlacements", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FUserProfileWeaponPlacementInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELUserProfileManager_Statics::NewProp_m_WeaponPlacements_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELUserProfileManager" },
		{ "ModuleRelativePath", "Public/ELUserProfileManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELUserProfileManager_Statics::NewProp_m_WeaponPlacements = { "m_WeaponPlacements", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELUserProfileManager, m_WeaponPlacements), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELUserProfileManager_Statics::NewProp_m_WeaponPlacements_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELUserProfileManager_Statics::NewProp_m_WeaponPlacements_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELUserProfileManager_Statics::NewProp_m_WeaponSymbolIconRefMap_ValueProp = { "m_WeaponSymbolIconRefMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FUserProfileUserIconInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELUserProfileManager_Statics::NewProp_m_WeaponSymbolIconRefMap_Key_KeyProp = { "m_WeaponSymbolIconRefMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELUserProfileManager_Statics::NewProp_m_WeaponSymbolIconRefMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELUserProfileManager" },
		{ "ModuleRelativePath", "Public/ELUserProfileManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UELUserProfileManager_Statics::NewProp_m_WeaponSymbolIconRefMap = { "m_WeaponSymbolIconRefMap", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELUserProfileManager, m_WeaponSymbolIconRefMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELUserProfileManager_Statics::NewProp_m_WeaponSymbolIconRefMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELUserProfileManager_Statics::NewProp_m_WeaponSymbolIconRefMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELUserProfileManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELUserProfileManager_Statics::NewProp_m_PlayerIconRefMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELUserProfileManager_Statics::NewProp_m_PlayerIconRefMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELUserProfileManager_Statics::NewProp_m_PlayerIconRefMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELUserProfileManager_Statics::NewProp_m_PlayerIconBgRefMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELUserProfileManager_Statics::NewProp_m_PlayerIconBgRefMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELUserProfileManager_Statics::NewProp_m_PlayerIconBgRefMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELUserProfileManager_Statics::NewProp_m_BadgeRefMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELUserProfileManager_Statics::NewProp_m_BadgeRefMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELUserProfileManager_Statics::NewProp_m_BadgeRefMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELUserProfileManager_Statics::NewProp_m_WeaponDecalRefMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELUserProfileManager_Statics::NewProp_m_WeaponDecalRefMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELUserProfileManager_Statics::NewProp_m_WeaponDecalRefMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELUserProfileManager_Statics::NewProp_m_WeaponPlacements_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELUserProfileManager_Statics::NewProp_m_WeaponPlacements,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELUserProfileManager_Statics::NewProp_m_WeaponSymbolIconRefMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELUserProfileManager_Statics::NewProp_m_WeaponSymbolIconRefMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELUserProfileManager_Statics::NewProp_m_WeaponSymbolIconRefMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELUserProfileManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELUserProfileManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELUserProfileManager_Statics::ClassParams = {
		&UELUserProfileManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELUserProfileManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELUserProfileManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELUserProfileManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELUserProfileManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELUserProfileManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELUserProfileManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELUserProfileManager, 2026467038);
	template<> ABP_200508_API UClass* StaticClass<UELUserProfileManager>()
	{
		return UELUserProfileManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELUserProfileManager(Z_Construct_UClass_UELUserProfileManager, &UELUserProfileManager::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELUserProfileManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELUserProfileManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
