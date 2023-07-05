// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/YGameMoney_DebugMenu.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYGameMoney_DebugMenu() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UYGameMoney_DebugMenu_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UYGameMoney_DebugMenu();
	ABP_200508_API UClass* Z_Construct_UClass_UELDebugMenuRootBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSUserContentsEvent();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUserContentsBase_NoRegister();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSUserContentProgress();
// End Cross Module References
	DEFINE_FUNCTION(UYGameMoney_DebugMenu::execOnUploadPossessedGold)
	{
		P_GET_UBOOL(Z_Param__Successed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUploadPossessedGold(Z_Param__Successed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGameMoney_DebugMenu::execOnUserContentsEvent)
	{
		P_GET_ENUM(EEOSUserContentsEvent,Z_Param__enUserContentsEvent);
		P_GET_OBJECT(UEOSUserContentsBase,Z_Param__pcUserContentsBase);
		P_GET_STRUCT_REF(FEOSUserContentProgress,Z_Param_Out__rstProgress);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUserContentsEvent(EEOSUserContentsEvent(Z_Param__enUserContentsEvent),Z_Param__pcUserContentsBase,Z_Param_Out__rstProgress);
		P_NATIVE_END;
	}
	void UYGameMoney_DebugMenu::StaticRegisterNativesUYGameMoney_DebugMenu()
	{
		UClass* Class = UYGameMoney_DebugMenu::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnUploadPossessedGold", &UYGameMoney_DebugMenu::execOnUploadPossessedGold },
			{ "OnUserContentsEvent", &UYGameMoney_DebugMenu::execOnUserContentsEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UYGameMoney_DebugMenu_OnUploadPossessedGold_Statics
	{
		struct YGameMoney_DebugMenu_eventOnUploadPossessedGold_Parms
		{
			bool _Successed;
		};
		static void NewProp__Successed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__Successed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UYGameMoney_DebugMenu_OnUploadPossessedGold_Statics::NewProp__Successed_SetBit(void* Obj)
	{
		((YGameMoney_DebugMenu_eventOnUploadPossessedGold_Parms*)Obj)->_Successed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYGameMoney_DebugMenu_OnUploadPossessedGold_Statics::NewProp__Successed = { "_Successed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YGameMoney_DebugMenu_eventOnUploadPossessedGold_Parms), &Z_Construct_UFunction_UYGameMoney_DebugMenu_OnUploadPossessedGold_Statics::NewProp__Successed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGameMoney_DebugMenu_OnUploadPossessedGold_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGameMoney_DebugMenu_OnUploadPossessedGold_Statics::NewProp__Successed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGameMoney_DebugMenu_OnUploadPossessedGold_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGameMoney_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGameMoney_DebugMenu_OnUploadPossessedGold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGameMoney_DebugMenu, nullptr, "OnUploadPossessedGold", nullptr, nullptr, sizeof(YGameMoney_DebugMenu_eventOnUploadPossessedGold_Parms), Z_Construct_UFunction_UYGameMoney_DebugMenu_OnUploadPossessedGold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGameMoney_DebugMenu_OnUploadPossessedGold_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGameMoney_DebugMenu_OnUploadPossessedGold_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGameMoney_DebugMenu_OnUploadPossessedGold_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGameMoney_DebugMenu_OnUploadPossessedGold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGameMoney_DebugMenu_OnUploadPossessedGold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGameMoney_DebugMenu_OnUserContentsEvent_Statics
	{
		struct YGameMoney_DebugMenu_eventOnUserContentsEvent_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYGameMoney_DebugMenu_OnUserContentsEvent_Statics::NewProp__enUserContentsEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYGameMoney_DebugMenu_OnUserContentsEvent_Statics::NewProp__enUserContentsEvent = { "_enUserContentsEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGameMoney_DebugMenu_eventOnUserContentsEvent_Parms, _enUserContentsEvent), Z_Construct_UEnum_yEOSSDK_EEOSUserContentsEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYGameMoney_DebugMenu_OnUserContentsEvent_Statics::NewProp__pcUserContentsBase = { "_pcUserContentsBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGameMoney_DebugMenu_eventOnUserContentsEvent_Parms, _pcUserContentsBase), Z_Construct_UClass_UEOSUserContentsBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGameMoney_DebugMenu_OnUserContentsEvent_Statics::NewProp__rstProgress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYGameMoney_DebugMenu_OnUserContentsEvent_Statics::NewProp__rstProgress = { "_rstProgress", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGameMoney_DebugMenu_eventOnUserContentsEvent_Parms, _rstProgress), Z_Construct_UScriptStruct_FEOSUserContentProgress, METADATA_PARAMS(Z_Construct_UFunction_UYGameMoney_DebugMenu_OnUserContentsEvent_Statics::NewProp__rstProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGameMoney_DebugMenu_OnUserContentsEvent_Statics::NewProp__rstProgress_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGameMoney_DebugMenu_OnUserContentsEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGameMoney_DebugMenu_OnUserContentsEvent_Statics::NewProp__enUserContentsEvent_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGameMoney_DebugMenu_OnUserContentsEvent_Statics::NewProp__enUserContentsEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGameMoney_DebugMenu_OnUserContentsEvent_Statics::NewProp__pcUserContentsBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGameMoney_DebugMenu_OnUserContentsEvent_Statics::NewProp__rstProgress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGameMoney_DebugMenu_OnUserContentsEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGameMoney_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGameMoney_DebugMenu_OnUserContentsEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGameMoney_DebugMenu, nullptr, "OnUserContentsEvent", nullptr, nullptr, sizeof(YGameMoney_DebugMenu_eventOnUserContentsEvent_Parms), Z_Construct_UFunction_UYGameMoney_DebugMenu_OnUserContentsEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGameMoney_DebugMenu_OnUserContentsEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGameMoney_DebugMenu_OnUserContentsEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGameMoney_DebugMenu_OnUserContentsEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGameMoney_DebugMenu_OnUserContentsEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGameMoney_DebugMenu_OnUserContentsEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UYGameMoney_DebugMenu_NoRegister()
	{
		return UYGameMoney_DebugMenu::StaticClass();
	}
	struct Z_Construct_UClass_UYGameMoney_DebugMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UYGameMoney_DebugMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELDebugMenuRootBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UYGameMoney_DebugMenu_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UYGameMoney_DebugMenu_OnUploadPossessedGold, "OnUploadPossessedGold" }, // 1444688723
		{ &Z_Construct_UFunction_UYGameMoney_DebugMenu_OnUserContentsEvent, "OnUserContentsEvent" }, // 2311057140
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYGameMoney_DebugMenu_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "YGameMoney_DebugMenu.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/YGameMoney_DebugMenu.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYGameMoney_DebugMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYGameMoney_DebugMenu>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UYGameMoney_DebugMenu_Statics::ClassParams = {
		&UYGameMoney_DebugMenu::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UYGameMoney_DebugMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UYGameMoney_DebugMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UYGameMoney_DebugMenu()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UYGameMoney_DebugMenu_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UYGameMoney_DebugMenu, 3695576481);
	template<> ABP_200508_API UClass* StaticClass<UYGameMoney_DebugMenu>()
	{
		return UYGameMoney_DebugMenu::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UYGameMoney_DebugMenu(Z_Construct_UClass_UYGameMoney_DebugMenu, &UYGameMoney_DebugMenu::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UYGameMoney_DebugMenu"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYGameMoney_DebugMenu);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
