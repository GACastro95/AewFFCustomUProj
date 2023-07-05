// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELCareerRecordsWidgetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCareerRecordsWidgetBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerRecordsWidgetBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerRecordsWidgetBase();
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EELBelt();
// End Cross Module References
	DEFINE_FUNCTION(UELCareerRecordsWidgetBase::execGetBeltHighestRank)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EELBelt*)Z_Param__Result=P_THIS->GetBeltHighestRank();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerRecordsWidgetBase::execIsBeltDispThumbnail)
	{
		P_GET_ENUM(EELBelt,Z_Param_eBelt);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsBeltDispThumbnail(EELBelt(Z_Param_eBelt));
		P_NATIVE_END;
	}
	static FName NAME_UELCareerRecordsWidgetBase_OnPressedMoveOtherList = FName(TEXT("OnPressedMoveOtherList"));
	void UELCareerRecordsWidgetBase::OnPressedMoveOtherList(int32 _addX, int32 _addY)
	{
		ELCareerRecordsWidgetBase_eventOnPressedMoveOtherList_Parms Parms;
		Parms._addX=_addX;
		Parms._addY=_addY;
		ProcessEvent(FindFunctionChecked(NAME_UELCareerRecordsWidgetBase_OnPressedMoveOtherList),&Parms);
	}
	static FName NAME_UELCareerRecordsWidgetBase_OnPressedMoveTab = FName(TEXT("OnPressedMoveTab"));
	void UELCareerRecordsWidgetBase::OnPressedMoveTab(bool _isLeft)
	{
		ELCareerRecordsWidgetBase_eventOnPressedMoveTab_Parms Parms;
		Parms._isLeft=_isLeft ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELCareerRecordsWidgetBase_OnPressedMoveTab),&Parms);
	}
	void UELCareerRecordsWidgetBase::StaticRegisterNativesUELCareerRecordsWidgetBase()
	{
		UClass* Class = UELCareerRecordsWidgetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBeltHighestRank", &UELCareerRecordsWidgetBase::execGetBeltHighestRank },
			{ "IsBeltDispThumbnail", &UELCareerRecordsWidgetBase::execIsBeltDispThumbnail },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELCareerRecordsWidgetBase_GetBeltHighestRank_Statics
	{
		struct ELCareerRecordsWidgetBase_eventGetBeltHighestRank_Parms
		{
			EELBelt ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerRecordsWidgetBase_GetBeltHighestRank_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerRecordsWidgetBase_GetBeltHighestRank_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerRecordsWidgetBase_eventGetBeltHighestRank_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_EELBelt, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerRecordsWidgetBase_GetBeltHighestRank_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerRecordsWidgetBase_GetBeltHighestRank_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerRecordsWidgetBase_GetBeltHighestRank_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerRecordsWidgetBase_GetBeltHighestRank_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerRecordsWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerRecordsWidgetBase_GetBeltHighestRank_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerRecordsWidgetBase, nullptr, "GetBeltHighestRank", nullptr, nullptr, sizeof(ELCareerRecordsWidgetBase_eventGetBeltHighestRank_Parms), Z_Construct_UFunction_UELCareerRecordsWidgetBase_GetBeltHighestRank_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerRecordsWidgetBase_GetBeltHighestRank_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerRecordsWidgetBase_GetBeltHighestRank_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerRecordsWidgetBase_GetBeltHighestRank_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerRecordsWidgetBase_GetBeltHighestRank()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerRecordsWidgetBase_GetBeltHighestRank_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerRecordsWidgetBase_IsBeltDispThumbnail_Statics
	{
		struct ELCareerRecordsWidgetBase_eventIsBeltDispThumbnail_Parms
		{
			EELBelt eBelt;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eBelt_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eBelt;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerRecordsWidgetBase_IsBeltDispThumbnail_Statics::NewProp_eBelt_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerRecordsWidgetBase_IsBeltDispThumbnail_Statics::NewProp_eBelt = { "eBelt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerRecordsWidgetBase_eventIsBeltDispThumbnail_Parms, eBelt), Z_Construct_UEnum_ELITE_Game_EELBelt, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELCareerRecordsWidgetBase_IsBeltDispThumbnail_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELCareerRecordsWidgetBase_eventIsBeltDispThumbnail_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerRecordsWidgetBase_IsBeltDispThumbnail_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerRecordsWidgetBase_eventIsBeltDispThumbnail_Parms), &Z_Construct_UFunction_UELCareerRecordsWidgetBase_IsBeltDispThumbnail_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerRecordsWidgetBase_IsBeltDispThumbnail_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerRecordsWidgetBase_IsBeltDispThumbnail_Statics::NewProp_eBelt_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerRecordsWidgetBase_IsBeltDispThumbnail_Statics::NewProp_eBelt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerRecordsWidgetBase_IsBeltDispThumbnail_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerRecordsWidgetBase_IsBeltDispThumbnail_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerRecordsWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerRecordsWidgetBase_IsBeltDispThumbnail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerRecordsWidgetBase, nullptr, "IsBeltDispThumbnail", nullptr, nullptr, sizeof(ELCareerRecordsWidgetBase_eventIsBeltDispThumbnail_Parms), Z_Construct_UFunction_UELCareerRecordsWidgetBase_IsBeltDispThumbnail_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerRecordsWidgetBase_IsBeltDispThumbnail_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerRecordsWidgetBase_IsBeltDispThumbnail_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerRecordsWidgetBase_IsBeltDispThumbnail_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerRecordsWidgetBase_IsBeltDispThumbnail()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerRecordsWidgetBase_IsBeltDispThumbnail_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerRecordsWidgetBase_OnPressedMoveOtherList_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__addX;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__addY;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerRecordsWidgetBase_OnPressedMoveOtherList_Statics::NewProp__addX = { "_addX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerRecordsWidgetBase_eventOnPressedMoveOtherList_Parms, _addX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerRecordsWidgetBase_OnPressedMoveOtherList_Statics::NewProp__addY = { "_addY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerRecordsWidgetBase_eventOnPressedMoveOtherList_Parms, _addY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerRecordsWidgetBase_OnPressedMoveOtherList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerRecordsWidgetBase_OnPressedMoveOtherList_Statics::NewProp__addX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerRecordsWidgetBase_OnPressedMoveOtherList_Statics::NewProp__addY,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerRecordsWidgetBase_OnPressedMoveOtherList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerRecordsWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerRecordsWidgetBase_OnPressedMoveOtherList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerRecordsWidgetBase, nullptr, "OnPressedMoveOtherList", nullptr, nullptr, sizeof(ELCareerRecordsWidgetBase_eventOnPressedMoveOtherList_Parms), Z_Construct_UFunction_UELCareerRecordsWidgetBase_OnPressedMoveOtherList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerRecordsWidgetBase_OnPressedMoveOtherList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerRecordsWidgetBase_OnPressedMoveOtherList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerRecordsWidgetBase_OnPressedMoveOtherList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerRecordsWidgetBase_OnPressedMoveOtherList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerRecordsWidgetBase_OnPressedMoveOtherList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerRecordsWidgetBase_OnPressedMoveTab_Statics
	{
		static void NewProp__isLeft_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isLeft;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELCareerRecordsWidgetBase_OnPressedMoveTab_Statics::NewProp__isLeft_SetBit(void* Obj)
	{
		((ELCareerRecordsWidgetBase_eventOnPressedMoveTab_Parms*)Obj)->_isLeft = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerRecordsWidgetBase_OnPressedMoveTab_Statics::NewProp__isLeft = { "_isLeft", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerRecordsWidgetBase_eventOnPressedMoveTab_Parms), &Z_Construct_UFunction_UELCareerRecordsWidgetBase_OnPressedMoveTab_Statics::NewProp__isLeft_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerRecordsWidgetBase_OnPressedMoveTab_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerRecordsWidgetBase_OnPressedMoveTab_Statics::NewProp__isLeft,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerRecordsWidgetBase_OnPressedMoveTab_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerRecordsWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerRecordsWidgetBase_OnPressedMoveTab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerRecordsWidgetBase, nullptr, "OnPressedMoveTab", nullptr, nullptr, sizeof(ELCareerRecordsWidgetBase_eventOnPressedMoveTab_Parms), Z_Construct_UFunction_UELCareerRecordsWidgetBase_OnPressedMoveTab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerRecordsWidgetBase_OnPressedMoveTab_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerRecordsWidgetBase_OnPressedMoveTab_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerRecordsWidgetBase_OnPressedMoveTab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerRecordsWidgetBase_OnPressedMoveTab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerRecordsWidgetBase_OnPressedMoveTab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELCareerRecordsWidgetBase_NoRegister()
	{
		return UELCareerRecordsWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_UELCareerRecordsWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELCareerRecordsWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELCareerWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELCareerRecordsWidgetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELCareerRecordsWidgetBase_GetBeltHighestRank, "GetBeltHighestRank" }, // 4141119306
		{ &Z_Construct_UFunction_UELCareerRecordsWidgetBase_IsBeltDispThumbnail, "IsBeltDispThumbnail" }, // 2187927323
		{ &Z_Construct_UFunction_UELCareerRecordsWidgetBase_OnPressedMoveOtherList, "OnPressedMoveOtherList" }, // 1179518990
		{ &Z_Construct_UFunction_UELCareerRecordsWidgetBase_OnPressedMoveTab, "OnPressedMoveTab" }, // 3797712848
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerRecordsWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELCareerRecordsWidgetBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCareerRecordsWidgetBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELCareerRecordsWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELCareerRecordsWidgetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELCareerRecordsWidgetBase_Statics::ClassParams = {
		&UELCareerRecordsWidgetBase::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELCareerRecordsWidgetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerRecordsWidgetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELCareerRecordsWidgetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELCareerRecordsWidgetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELCareerRecordsWidgetBase, 900978759);
	template<> ABP_200508_API UClass* StaticClass<UELCareerRecordsWidgetBase>()
	{
		return UELCareerRecordsWidgetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELCareerRecordsWidgetBase(Z_Construct_UClass_UELCareerRecordsWidgetBase, &UELCareerRecordsWidgetBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELCareerRecordsWidgetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELCareerRecordsWidgetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
