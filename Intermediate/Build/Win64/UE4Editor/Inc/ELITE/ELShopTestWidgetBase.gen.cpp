// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/ELShopTestWidgetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELShopTestWidgetBase() {}
// Cross Module References
	ELITE_API UClass* Z_Construct_UClass_UELShopTestWidgetBase_NoRegister();
	ELITE_API UClass* Z_Construct_UClass_UELShopTestWidgetBase();
	ABP_200508_API UClass* Z_Construct_UClass_UELMenuWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ELITE();
	ELITE_API UEnum* Z_Construct_UEnum_ELITE_ERequestGoldCheckType();
	ABP_200508_API UClass* Z_Construct_UClass_USaveDataSystem_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_USaveDataObjectBase_NoRegister();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSUserContentsEvent();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUserContentsBase_NoRegister();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSUserContentProgress();
// End Cross Module References
	DEFINE_FUNCTION(UELShopTestWidgetBase::execCheckCurrentGoldNum)
	{
		P_GET_ENUM(ERequestGoldCheckType,Z_Param__checkType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckCurrentGoldNum(ERequestGoldCheckType(Z_Param__checkType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELShopTestWidgetBase::execCreateLocalPlayerDataObject)
	{
		P_GET_OBJECT(USaveDataSystem,Z_Param__saveDataSystem);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateLocalPlayerDataObject(Z_Param__saveDataSystem);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELShopTestWidgetBase::execGetLocalPlayerDataObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USaveDataObjectBase**)Z_Param__Result=P_THIS->GetLocalPlayerDataObject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELShopTestWidgetBase::execGetRequestGoldCheckType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ERequestGoldCheckType*)Z_Param__Result=P_THIS->GetRequestGoldCheckType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELShopTestWidgetBase::execOnUserContentsEvent)
	{
		P_GET_ENUM(EEOSUserContentsEvent,Z_Param__enUserContentsEvent);
		P_GET_OBJECT(UEOSUserContentsBase,Z_Param__pcUserContentsBase);
		P_GET_STRUCT_REF(FEOSUserContentProgress,Z_Param_Out__rstProgress);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUserContentsEvent(EEOSUserContentsEvent(Z_Param__enUserContentsEvent),Z_Param__pcUserContentsBase,Z_Param_Out__rstProgress);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELShopTestWidgetBase::execSetDispHorizontalListNum)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__num);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDispHorizontalListNum(Z_Param__num);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELShopTestWidgetBase::execSetShopItemNum)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__num);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShopItemNum(Z_Param__num);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELShopTestWidgetBase::execUpdataGoldNum)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdataGoldNum(Z_Param__value);
		P_NATIVE_END;
	}
	static FName NAME_UELShopTestWidgetBase_OnCancelItem = FName(TEXT("OnCancelItem"));
	void UELShopTestWidgetBase::OnCancelItem()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELShopTestWidgetBase_OnCancelItem),NULL);
	}
	static FName NAME_UELShopTestWidgetBase_OnChangeCategory = FName(TEXT("OnChangeCategory"));
	void UELShopTestWidgetBase::OnChangeCategory(int32 _addIndex)
	{
		ELShopTestWidgetBase_eventOnChangeCategory_Parms Parms;
		Parms._addIndex=_addIndex;
		ProcessEvent(FindFunctionChecked(NAME_UELShopTestWidgetBase_OnChangeCategory),&Parms);
	}
	static FName NAME_UELShopTestWidgetBase_OnCheckedCurrentGoldNum = FName(TEXT("OnCheckedCurrentGoldNum"));
	void UELShopTestWidgetBase::OnCheckedCurrentGoldNum(bool _isSuccessed, int32 Num)
	{
		ELShopTestWidgetBase_eventOnCheckedCurrentGoldNum_Parms Parms;
		Parms._isSuccessed=_isSuccessed ? true : false;
		Parms.Num=Num;
		ProcessEvent(FindFunctionChecked(NAME_UELShopTestWidgetBase_OnCheckedCurrentGoldNum),&Parms);
	}
	static FName NAME_UELShopTestWidgetBase_OnDecideItem = FName(TEXT("OnDecideItem"));
	void UELShopTestWidgetBase::OnDecideItem()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELShopTestWidgetBase_OnDecideItem),NULL);
	}
	static FName NAME_UELShopTestWidgetBase_OnPressedMoveTab = FName(TEXT("OnPressedMoveTab"));
	void UELShopTestWidgetBase::OnPressedMoveTab(bool _isLeft)
	{
		ELShopTestWidgetBase_eventOnPressedMoveTab_Parms Parms;
		Parms._isLeft=_isLeft ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELShopTestWidgetBase_OnPressedMoveTab),&Parms);
	}
	static FName NAME_UELShopTestWidgetBase_OnUpdateCurrentGoldNum = FName(TEXT("OnUpdateCurrentGoldNum"));
	void UELShopTestWidgetBase::OnUpdateCurrentGoldNum(int32 Num)
	{
		ELShopTestWidgetBase_eventOnUpdateCurrentGoldNum_Parms Parms;
		Parms.Num=Num;
		ProcessEvent(FindFunctionChecked(NAME_UELShopTestWidgetBase_OnUpdateCurrentGoldNum),&Parms);
	}
	void UELShopTestWidgetBase::StaticRegisterNativesUELShopTestWidgetBase()
	{
		UClass* Class = UELShopTestWidgetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckCurrentGoldNum", &UELShopTestWidgetBase::execCheckCurrentGoldNum },
			{ "CreateLocalPlayerDataObject", &UELShopTestWidgetBase::execCreateLocalPlayerDataObject },
			{ "GetLocalPlayerDataObject", &UELShopTestWidgetBase::execGetLocalPlayerDataObject },
			{ "GetRequestGoldCheckType", &UELShopTestWidgetBase::execGetRequestGoldCheckType },
			{ "OnUserContentsEvent", &UELShopTestWidgetBase::execOnUserContentsEvent },
			{ "SetDispHorizontalListNum", &UELShopTestWidgetBase::execSetDispHorizontalListNum },
			{ "SetShopItemNum", &UELShopTestWidgetBase::execSetShopItemNum },
			{ "UpdataGoldNum", &UELShopTestWidgetBase::execUpdataGoldNum },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELShopTestWidgetBase_CheckCurrentGoldNum_Statics
	{
		struct ELShopTestWidgetBase_eventCheckCurrentGoldNum_Parms
		{
			ERequestGoldCheckType _checkType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__checkType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__checkType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELShopTestWidgetBase_CheckCurrentGoldNum_Statics::NewProp__checkType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELShopTestWidgetBase_CheckCurrentGoldNum_Statics::NewProp__checkType = { "_checkType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELShopTestWidgetBase_eventCheckCurrentGoldNum_Parms, _checkType), Z_Construct_UEnum_ELITE_ERequestGoldCheckType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELShopTestWidgetBase_CheckCurrentGoldNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELShopTestWidgetBase_CheckCurrentGoldNum_Statics::NewProp__checkType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELShopTestWidgetBase_CheckCurrentGoldNum_Statics::NewProp__checkType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShopTestWidgetBase_CheckCurrentGoldNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELShopTestWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELShopTestWidgetBase_CheckCurrentGoldNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELShopTestWidgetBase, nullptr, "CheckCurrentGoldNum", nullptr, nullptr, sizeof(ELShopTestWidgetBase_eventCheckCurrentGoldNum_Parms), Z_Construct_UFunction_UELShopTestWidgetBase_CheckCurrentGoldNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopTestWidgetBase_CheckCurrentGoldNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELShopTestWidgetBase_CheckCurrentGoldNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopTestWidgetBase_CheckCurrentGoldNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELShopTestWidgetBase_CheckCurrentGoldNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELShopTestWidgetBase_CheckCurrentGoldNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELShopTestWidgetBase_CreateLocalPlayerDataObject_Statics
	{
		struct ELShopTestWidgetBase_eventCreateLocalPlayerDataObject_Parms
		{
			USaveDataSystem* _saveDataSystem;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__saveDataSystem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELShopTestWidgetBase_CreateLocalPlayerDataObject_Statics::NewProp__saveDataSystem = { "_saveDataSystem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELShopTestWidgetBase_eventCreateLocalPlayerDataObject_Parms, _saveDataSystem), Z_Construct_UClass_USaveDataSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELShopTestWidgetBase_CreateLocalPlayerDataObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELShopTestWidgetBase_CreateLocalPlayerDataObject_Statics::NewProp__saveDataSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShopTestWidgetBase_CreateLocalPlayerDataObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELShopTestWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELShopTestWidgetBase_CreateLocalPlayerDataObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELShopTestWidgetBase, nullptr, "CreateLocalPlayerDataObject", nullptr, nullptr, sizeof(ELShopTestWidgetBase_eventCreateLocalPlayerDataObject_Parms), Z_Construct_UFunction_UELShopTestWidgetBase_CreateLocalPlayerDataObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopTestWidgetBase_CreateLocalPlayerDataObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELShopTestWidgetBase_CreateLocalPlayerDataObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopTestWidgetBase_CreateLocalPlayerDataObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELShopTestWidgetBase_CreateLocalPlayerDataObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELShopTestWidgetBase_CreateLocalPlayerDataObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELShopTestWidgetBase_GetLocalPlayerDataObject_Statics
	{
		struct ELShopTestWidgetBase_eventGetLocalPlayerDataObject_Parms
		{
			USaveDataObjectBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELShopTestWidgetBase_GetLocalPlayerDataObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELShopTestWidgetBase_eventGetLocalPlayerDataObject_Parms, ReturnValue), Z_Construct_UClass_USaveDataObjectBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELShopTestWidgetBase_GetLocalPlayerDataObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELShopTestWidgetBase_GetLocalPlayerDataObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShopTestWidgetBase_GetLocalPlayerDataObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELShopTestWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELShopTestWidgetBase_GetLocalPlayerDataObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELShopTestWidgetBase, nullptr, "GetLocalPlayerDataObject", nullptr, nullptr, sizeof(ELShopTestWidgetBase_eventGetLocalPlayerDataObject_Parms), Z_Construct_UFunction_UELShopTestWidgetBase_GetLocalPlayerDataObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopTestWidgetBase_GetLocalPlayerDataObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELShopTestWidgetBase_GetLocalPlayerDataObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopTestWidgetBase_GetLocalPlayerDataObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELShopTestWidgetBase_GetLocalPlayerDataObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELShopTestWidgetBase_GetLocalPlayerDataObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELShopTestWidgetBase_GetRequestGoldCheckType_Statics
	{
		struct ELShopTestWidgetBase_eventGetRequestGoldCheckType_Parms
		{
			ERequestGoldCheckType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELShopTestWidgetBase_GetRequestGoldCheckType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELShopTestWidgetBase_GetRequestGoldCheckType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELShopTestWidgetBase_eventGetRequestGoldCheckType_Parms, ReturnValue), Z_Construct_UEnum_ELITE_ERequestGoldCheckType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELShopTestWidgetBase_GetRequestGoldCheckType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELShopTestWidgetBase_GetRequestGoldCheckType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELShopTestWidgetBase_GetRequestGoldCheckType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShopTestWidgetBase_GetRequestGoldCheckType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELShopTestWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELShopTestWidgetBase_GetRequestGoldCheckType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELShopTestWidgetBase, nullptr, "GetRequestGoldCheckType", nullptr, nullptr, sizeof(ELShopTestWidgetBase_eventGetRequestGoldCheckType_Parms), Z_Construct_UFunction_UELShopTestWidgetBase_GetRequestGoldCheckType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopTestWidgetBase_GetRequestGoldCheckType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELShopTestWidgetBase_GetRequestGoldCheckType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopTestWidgetBase_GetRequestGoldCheckType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELShopTestWidgetBase_GetRequestGoldCheckType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELShopTestWidgetBase_GetRequestGoldCheckType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELShopTestWidgetBase_OnCancelItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShopTestWidgetBase_OnCancelItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELShopTestWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELShopTestWidgetBase_OnCancelItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELShopTestWidgetBase, nullptr, "OnCancelItem", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELShopTestWidgetBase_OnCancelItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopTestWidgetBase_OnCancelItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELShopTestWidgetBase_OnCancelItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELShopTestWidgetBase_OnCancelItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELShopTestWidgetBase_OnChangeCategory_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__addIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELShopTestWidgetBase_OnChangeCategory_Statics::NewProp__addIndex = { "_addIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELShopTestWidgetBase_eventOnChangeCategory_Parms, _addIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELShopTestWidgetBase_OnChangeCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELShopTestWidgetBase_OnChangeCategory_Statics::NewProp__addIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShopTestWidgetBase_OnChangeCategory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELShopTestWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELShopTestWidgetBase_OnChangeCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELShopTestWidgetBase, nullptr, "OnChangeCategory", nullptr, nullptr, sizeof(ELShopTestWidgetBase_eventOnChangeCategory_Parms), Z_Construct_UFunction_UELShopTestWidgetBase_OnChangeCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopTestWidgetBase_OnChangeCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELShopTestWidgetBase_OnChangeCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopTestWidgetBase_OnChangeCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELShopTestWidgetBase_OnChangeCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELShopTestWidgetBase_OnChangeCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELShopTestWidgetBase_OnCheckedCurrentGoldNum_Statics
	{
		static void NewProp__isSuccessed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isSuccessed;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Num;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELShopTestWidgetBase_OnCheckedCurrentGoldNum_Statics::NewProp__isSuccessed_SetBit(void* Obj)
	{
		((ELShopTestWidgetBase_eventOnCheckedCurrentGoldNum_Parms*)Obj)->_isSuccessed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELShopTestWidgetBase_OnCheckedCurrentGoldNum_Statics::NewProp__isSuccessed = { "_isSuccessed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELShopTestWidgetBase_eventOnCheckedCurrentGoldNum_Parms), &Z_Construct_UFunction_UELShopTestWidgetBase_OnCheckedCurrentGoldNum_Statics::NewProp__isSuccessed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELShopTestWidgetBase_OnCheckedCurrentGoldNum_Statics::NewProp_Num = { "Num", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELShopTestWidgetBase_eventOnCheckedCurrentGoldNum_Parms, Num), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELShopTestWidgetBase_OnCheckedCurrentGoldNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELShopTestWidgetBase_OnCheckedCurrentGoldNum_Statics::NewProp__isSuccessed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELShopTestWidgetBase_OnCheckedCurrentGoldNum_Statics::NewProp_Num,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShopTestWidgetBase_OnCheckedCurrentGoldNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELShopTestWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELShopTestWidgetBase_OnCheckedCurrentGoldNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELShopTestWidgetBase, nullptr, "OnCheckedCurrentGoldNum", nullptr, nullptr, sizeof(ELShopTestWidgetBase_eventOnCheckedCurrentGoldNum_Parms), Z_Construct_UFunction_UELShopTestWidgetBase_OnCheckedCurrentGoldNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopTestWidgetBase_OnCheckedCurrentGoldNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELShopTestWidgetBase_OnCheckedCurrentGoldNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopTestWidgetBase_OnCheckedCurrentGoldNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELShopTestWidgetBase_OnCheckedCurrentGoldNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELShopTestWidgetBase_OnCheckedCurrentGoldNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELShopTestWidgetBase_OnDecideItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShopTestWidgetBase_OnDecideItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELShopTestWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELShopTestWidgetBase_OnDecideItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELShopTestWidgetBase, nullptr, "OnDecideItem", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELShopTestWidgetBase_OnDecideItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopTestWidgetBase_OnDecideItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELShopTestWidgetBase_OnDecideItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELShopTestWidgetBase_OnDecideItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELShopTestWidgetBase_OnPressedMoveTab_Statics
	{
		static void NewProp__isLeft_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isLeft;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELShopTestWidgetBase_OnPressedMoveTab_Statics::NewProp__isLeft_SetBit(void* Obj)
	{
		((ELShopTestWidgetBase_eventOnPressedMoveTab_Parms*)Obj)->_isLeft = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELShopTestWidgetBase_OnPressedMoveTab_Statics::NewProp__isLeft = { "_isLeft", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELShopTestWidgetBase_eventOnPressedMoveTab_Parms), &Z_Construct_UFunction_UELShopTestWidgetBase_OnPressedMoveTab_Statics::NewProp__isLeft_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELShopTestWidgetBase_OnPressedMoveTab_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELShopTestWidgetBase_OnPressedMoveTab_Statics::NewProp__isLeft,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShopTestWidgetBase_OnPressedMoveTab_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELShopTestWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELShopTestWidgetBase_OnPressedMoveTab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELShopTestWidgetBase, nullptr, "OnPressedMoveTab", nullptr, nullptr, sizeof(ELShopTestWidgetBase_eventOnPressedMoveTab_Parms), Z_Construct_UFunction_UELShopTestWidgetBase_OnPressedMoveTab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopTestWidgetBase_OnPressedMoveTab_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELShopTestWidgetBase_OnPressedMoveTab_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopTestWidgetBase_OnPressedMoveTab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELShopTestWidgetBase_OnPressedMoveTab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELShopTestWidgetBase_OnPressedMoveTab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELShopTestWidgetBase_OnUpdateCurrentGoldNum_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Num;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELShopTestWidgetBase_OnUpdateCurrentGoldNum_Statics::NewProp_Num = { "Num", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELShopTestWidgetBase_eventOnUpdateCurrentGoldNum_Parms, Num), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELShopTestWidgetBase_OnUpdateCurrentGoldNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELShopTestWidgetBase_OnUpdateCurrentGoldNum_Statics::NewProp_Num,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShopTestWidgetBase_OnUpdateCurrentGoldNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELShopTestWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELShopTestWidgetBase_OnUpdateCurrentGoldNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELShopTestWidgetBase, nullptr, "OnUpdateCurrentGoldNum", nullptr, nullptr, sizeof(ELShopTestWidgetBase_eventOnUpdateCurrentGoldNum_Parms), Z_Construct_UFunction_UELShopTestWidgetBase_OnUpdateCurrentGoldNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopTestWidgetBase_OnUpdateCurrentGoldNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELShopTestWidgetBase_OnUpdateCurrentGoldNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopTestWidgetBase_OnUpdateCurrentGoldNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELShopTestWidgetBase_OnUpdateCurrentGoldNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELShopTestWidgetBase_OnUpdateCurrentGoldNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELShopTestWidgetBase_OnUserContentsEvent_Statics
	{
		struct ELShopTestWidgetBase_eventOnUserContentsEvent_Parms
		{
			EEOSUserContentsEvent _enUserContentsEvent;
			UEOSUserContentsBase* _pcUserContentsBase;
			FEOSUserContentProgress _rstProgress;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enUserContentsEvent_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enUserContentsEvent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcUserContentsBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rstProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__rstProgress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELShopTestWidgetBase_OnUserContentsEvent_Statics::NewProp__enUserContentsEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELShopTestWidgetBase_OnUserContentsEvent_Statics::NewProp__enUserContentsEvent = { "_enUserContentsEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELShopTestWidgetBase_eventOnUserContentsEvent_Parms, _enUserContentsEvent), Z_Construct_UEnum_yEOSSDK_EEOSUserContentsEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELShopTestWidgetBase_OnUserContentsEvent_Statics::NewProp__pcUserContentsBase = { "_pcUserContentsBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELShopTestWidgetBase_eventOnUserContentsEvent_Parms, _pcUserContentsBase), Z_Construct_UClass_UEOSUserContentsBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShopTestWidgetBase_OnUserContentsEvent_Statics::NewProp__rstProgress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELShopTestWidgetBase_OnUserContentsEvent_Statics::NewProp__rstProgress = { "_rstProgress", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELShopTestWidgetBase_eventOnUserContentsEvent_Parms, _rstProgress), Z_Construct_UScriptStruct_FEOSUserContentProgress, METADATA_PARAMS(Z_Construct_UFunction_UELShopTestWidgetBase_OnUserContentsEvent_Statics::NewProp__rstProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopTestWidgetBase_OnUserContentsEvent_Statics::NewProp__rstProgress_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELShopTestWidgetBase_OnUserContentsEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELShopTestWidgetBase_OnUserContentsEvent_Statics::NewProp__enUserContentsEvent_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELShopTestWidgetBase_OnUserContentsEvent_Statics::NewProp__enUserContentsEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELShopTestWidgetBase_OnUserContentsEvent_Statics::NewProp__pcUserContentsBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELShopTestWidgetBase_OnUserContentsEvent_Statics::NewProp__rstProgress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShopTestWidgetBase_OnUserContentsEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELShopTestWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELShopTestWidgetBase_OnUserContentsEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELShopTestWidgetBase, nullptr, "OnUserContentsEvent", nullptr, nullptr, sizeof(ELShopTestWidgetBase_eventOnUserContentsEvent_Parms), Z_Construct_UFunction_UELShopTestWidgetBase_OnUserContentsEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopTestWidgetBase_OnUserContentsEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELShopTestWidgetBase_OnUserContentsEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopTestWidgetBase_OnUserContentsEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELShopTestWidgetBase_OnUserContentsEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELShopTestWidgetBase_OnUserContentsEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELShopTestWidgetBase_SetDispHorizontalListNum_Statics
	{
		struct ELShopTestWidgetBase_eventSetDispHorizontalListNum_Parms
		{
			int32 _num;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__num;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELShopTestWidgetBase_SetDispHorizontalListNum_Statics::NewProp__num = { "_num", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELShopTestWidgetBase_eventSetDispHorizontalListNum_Parms, _num), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELShopTestWidgetBase_SetDispHorizontalListNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELShopTestWidgetBase_SetDispHorizontalListNum_Statics::NewProp__num,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShopTestWidgetBase_SetDispHorizontalListNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELShopTestWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELShopTestWidgetBase_SetDispHorizontalListNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELShopTestWidgetBase, nullptr, "SetDispHorizontalListNum", nullptr, nullptr, sizeof(ELShopTestWidgetBase_eventSetDispHorizontalListNum_Parms), Z_Construct_UFunction_UELShopTestWidgetBase_SetDispHorizontalListNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopTestWidgetBase_SetDispHorizontalListNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELShopTestWidgetBase_SetDispHorizontalListNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopTestWidgetBase_SetDispHorizontalListNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELShopTestWidgetBase_SetDispHorizontalListNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELShopTestWidgetBase_SetDispHorizontalListNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELShopTestWidgetBase_SetShopItemNum_Statics
	{
		struct ELShopTestWidgetBase_eventSetShopItemNum_Parms
		{
			int32 _num;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__num;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELShopTestWidgetBase_SetShopItemNum_Statics::NewProp__num = { "_num", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELShopTestWidgetBase_eventSetShopItemNum_Parms, _num), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELShopTestWidgetBase_SetShopItemNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELShopTestWidgetBase_SetShopItemNum_Statics::NewProp__num,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShopTestWidgetBase_SetShopItemNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELShopTestWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELShopTestWidgetBase_SetShopItemNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELShopTestWidgetBase, nullptr, "SetShopItemNum", nullptr, nullptr, sizeof(ELShopTestWidgetBase_eventSetShopItemNum_Parms), Z_Construct_UFunction_UELShopTestWidgetBase_SetShopItemNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopTestWidgetBase_SetShopItemNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELShopTestWidgetBase_SetShopItemNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopTestWidgetBase_SetShopItemNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELShopTestWidgetBase_SetShopItemNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELShopTestWidgetBase_SetShopItemNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELShopTestWidgetBase_UpdataGoldNum_Statics
	{
		struct ELShopTestWidgetBase_eventUpdataGoldNum_Parms
		{
			int32 _value;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELShopTestWidgetBase_UpdataGoldNum_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELShopTestWidgetBase_eventUpdataGoldNum_Parms, _value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELShopTestWidgetBase_UpdataGoldNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELShopTestWidgetBase_UpdataGoldNum_Statics::NewProp__value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShopTestWidgetBase_UpdataGoldNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELShopTestWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELShopTestWidgetBase_UpdataGoldNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELShopTestWidgetBase, nullptr, "UpdataGoldNum", nullptr, nullptr, sizeof(ELShopTestWidgetBase_eventUpdataGoldNum_Parms), Z_Construct_UFunction_UELShopTestWidgetBase_UpdataGoldNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopTestWidgetBase_UpdataGoldNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELShopTestWidgetBase_UpdataGoldNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopTestWidgetBase_UpdataGoldNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELShopTestWidgetBase_UpdataGoldNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELShopTestWidgetBase_UpdataGoldNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELShopTestWidgetBase_NoRegister()
	{
		return UELShopTestWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_UELShopTestWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcPlayerDataObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcPlayerDataObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELShopTestWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELMenuWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELShopTestWidgetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELShopTestWidgetBase_CheckCurrentGoldNum, "CheckCurrentGoldNum" }, // 2332300375
		{ &Z_Construct_UFunction_UELShopTestWidgetBase_CreateLocalPlayerDataObject, "CreateLocalPlayerDataObject" }, // 2505930143
		{ &Z_Construct_UFunction_UELShopTestWidgetBase_GetLocalPlayerDataObject, "GetLocalPlayerDataObject" }, // 2636686602
		{ &Z_Construct_UFunction_UELShopTestWidgetBase_GetRequestGoldCheckType, "GetRequestGoldCheckType" }, // 3848162862
		{ &Z_Construct_UFunction_UELShopTestWidgetBase_OnCancelItem, "OnCancelItem" }, // 2418225693
		{ &Z_Construct_UFunction_UELShopTestWidgetBase_OnChangeCategory, "OnChangeCategory" }, // 1752418276
		{ &Z_Construct_UFunction_UELShopTestWidgetBase_OnCheckedCurrentGoldNum, "OnCheckedCurrentGoldNum" }, // 2419217892
		{ &Z_Construct_UFunction_UELShopTestWidgetBase_OnDecideItem, "OnDecideItem" }, // 1405813472
		{ &Z_Construct_UFunction_UELShopTestWidgetBase_OnPressedMoveTab, "OnPressedMoveTab" }, // 3903746760
		{ &Z_Construct_UFunction_UELShopTestWidgetBase_OnUpdateCurrentGoldNum, "OnUpdateCurrentGoldNum" }, // 3847685091
		{ &Z_Construct_UFunction_UELShopTestWidgetBase_OnUserContentsEvent, "OnUserContentsEvent" }, // 1804958529
		{ &Z_Construct_UFunction_UELShopTestWidgetBase_SetDispHorizontalListNum, "SetDispHorizontalListNum" }, // 687723549
		{ &Z_Construct_UFunction_UELShopTestWidgetBase_SetShopItemNum, "SetShopItemNum" }, // 3359268218
		{ &Z_Construct_UFunction_UELShopTestWidgetBase_UpdataGoldNum, "UpdataGoldNum" }, // 2630732405
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELShopTestWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELShopTestWidgetBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELShopTestWidgetBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELShopTestWidgetBase_Statics::NewProp_m_pcPlayerDataObject_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELShopTestWidgetBase" },
		{ "ModuleRelativePath", "Public/ELShopTestWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELShopTestWidgetBase_Statics::NewProp_m_pcPlayerDataObject = { "m_pcPlayerDataObject", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELShopTestWidgetBase, m_pcPlayerDataObject), Z_Construct_UClass_USaveDataObjectBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELShopTestWidgetBase_Statics::NewProp_m_pcPlayerDataObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELShopTestWidgetBase_Statics::NewProp_m_pcPlayerDataObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELShopTestWidgetBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELShopTestWidgetBase_Statics::NewProp_m_pcPlayerDataObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELShopTestWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELShopTestWidgetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELShopTestWidgetBase_Statics::ClassParams = {
		&UELShopTestWidgetBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELShopTestWidgetBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELShopTestWidgetBase_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELShopTestWidgetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELShopTestWidgetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELShopTestWidgetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELShopTestWidgetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELShopTestWidgetBase, 306939924);
	template<> ELITE_API UClass* StaticClass<UELShopTestWidgetBase>()
	{
		return UELShopTestWidgetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELShopTestWidgetBase(Z_Construct_UClass_UELShopTestWidgetBase, &UELShopTestWidgetBase::StaticClass, TEXT("/Script/ELITE"), TEXT("UELShopTestWidgetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELShopTestWidgetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
